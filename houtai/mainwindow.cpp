#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QTextCodec>
#include <cstdio>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("点餐服务器");

    // 创建服务器
    server = new QTcpServer(this);

    // 监听端口 50000
    if(server->listen(QHostAddress::Any, 50000))
    {
        qDebug() << "  服务器启动成功！监听端口：50000";
    }
    else
    {
        qDebug() << "服务器启动失败！";
    }

    // 绑定新连接信号
    connect(server, &QTcpServer::newConnection, this, &MainWindow::newConnection);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 新客户端连接
void MainWindow::newConnection()
{
    clientSocket = server->nextPendingConnection();
    qDebug() << "✅ 新的点餐客户端已连接！";

    connect(clientSocket, &QTcpSocket::readyRead, this, &MainWindow::receiveData);
    connect(clientSocket, &QTcpSocket::disconnected, this, &MainWindow::clientDisconnected);
}

// 接收客户端数据
void MainWindow::receiveData()
{
    // 读取客户端数据
    QByteArray ba = clientSocket->readAll();
    QString data = QString::fromUtf8(ba);
    static int tableId = 0;
    static int people = 0;
    // 情况1：处理呼叫服务
    if (data.startsWith("CALL_SERVICE:"))
    {
        ui->plainTextEdit_2->appendPlainText("========================================");
        ui->plainTextEdit_2->appendPlainText(QString("🔔 【%1号桌】请求服务！").arg(tableId));
        ui->plainTextEdit_2->appendPlainText("========================================\n");

        FILE *fp = fopen("call_service.txt", "a+");
        if(fp != NULL)
        {
            fprintf(fp, "%s | %d号桌呼叫服务\n",
                    QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss").toUtf8().data(),
                    tableId);
            fclose(fp);
        }
        clientSocket->write("SERVER_TABLE_OK");
        return;
    }

    // 情况2：处理登录信息（IP + 桌号 + 人数）
    if (data.contains("ip:") && data.contains("table:") && data.contains("people:"))
    {
        QStringList items = data.split(';');
        QString ip;

        for (QString item : items)
        {
            if (item.startsWith("ip:")) {
                ip = item.remove("ip:");
            }
            else if (item.startsWith("table:")) {
                tableId = item.remove("table:").toInt();
            }
            else if (item.startsWith("people:")) {
                people = item.remove("people:").toInt();
            }
        }

        // 界面显示
        ui->plainTextEdit->appendPlainText("========================================");
        ui->plainTextEdit->appendPlainText(QString("✅ 新客人入座！"));
        ui->plainTextEdit->appendPlainText(QString("🖥️ 客户端IP：%1").arg(ip));
        ui->plainTextEdit->appendPlainText(QString("🪑 桌号：%1 号").arg(tableId));
        ui->plainTextEdit->appendPlainText(QString("👥 人数：%1 人").arg(people));
        ui->plainTextEdit->appendPlainText("========================================\n");
        return;
    }

    // 情况3：处理正常订单
    QString orderData = data;
    QStringList items = orderData.split(';');
    QString orderText;
    int total = 0;

    for (QString item : items)
    {
        if (item.startsWith("total:"))
        {
            total = item.remove("total:").toInt();
            continue;
        }
        if (item.isEmpty()) continue;

        QStringList info = item.split(':');
        if (info.size() == 3)
        {
            QString name = info[0];
            int count = info[1].toInt();
            int price = info[2].toInt();
            int sum = count * price;

            orderText += QString("%1\t| 份数：%2 | 单价：%3 | 小计：%4\n")
                .arg(name, -15)
                .arg(count, 2)
                .arg(price, 3)
                .arg(sum, 4);
        }
    }

    // 显示订单
    ui->plainTextEdit->appendPlainText("========================================");
    ui->plainTextEdit->appendPlainText("📋 新订单来了：");
    ui->plainTextEdit->appendPlainText(QString("🪑 桌号：%1 号").arg(tableId));
    ui->plainTextEdit->appendPlainText(QString("👥 人数：%1 人").arg(people));
    ui->plainTextEdit->appendPlainText(orderText);
    ui->plainTextEdit->appendPlainText(QString("💰 订单总价：%1 元").arg(total));
    ui->plainTextEdit->appendPlainText("========================================\n");

    // 保存订单
    FILE *fpOrder = fopen("orders.txt", "a+");
    if(fpOrder != NULL)
    {
        fprintf(fpOrder, "%s | %d号桌订单 | %d人\n",
                QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss").toUtf8().data(),
                tableId,people);
        fprintf(fpOrder, "%s", orderText.toUtf8().data());
        fprintf(fpOrder, "总价：%d元\n", total);
        fprintf(fpOrder, "========================================\n\n");
        fclose(fpOrder);
    }

    clientSocket->write("SERVER_ORDER_OK");
}

// 客户端断开连接
void MainWindow::clientDisconnected()
{
    qDebug() << "❌ 点餐客户端断开连接";
    clientSocket->deleteLater();
}

// 清空订单文本框
void MainWindow::on_pushButton_clicked()
{
    ui->plainTextEdit->clear();
}

// 清空呼叫服务文本框
void MainWindow::on_pushButton_2_clicked()
{
    ui->plainTextEdit_2->clear();
}

// 登录
void MainWindow::on_pushButton_3_clicked()
{
    QString inputUser = ui->lineEdit->text().trimmed();
    QString inputPwd = ui->lineEdit_2->text().trimmed();

    // 非空判断
    if (inputUser.isEmpty() || inputPwd.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入账号和密码！");
        return;
    }

    QFile file("user.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "错误", "未找到用户文件，请先注册！");
        return;
    }

    QTextStream in(&file);
    bool loginSuccess = false;

    // 逐行读取所有用户 进行验证
    while (!in.atEnd())
    {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList userInfo = line.split(" ");
        if (userInfo.size() >= 2)
        {
            QString savedUser = userInfo[0];
            QString savedPwd = userInfo[1];

            // 匹配成功
            if (inputUser == savedUser && inputPwd == savedPwd)
            {
                loginSuccess = true;
                break;
            }
        }
    }

    file.close();

    // 登录结果
    if (loginSuccess)
    {
        QMessageBox::information(this, "成功", "登录成功！");
        ui->stackedWidget->setCurrentIndex(1); // 切页
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    }
    else
    {
        QMessageBox::warning(this, "失败", "账号或密码错误！");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    }
}

// 注册（支持多用户 + 账号重复判断）
void MainWindow::on_pushButton_4_clicked()
{
    QString user = ui->lineEdit->text().trimmed();
    QString pwd = ui->lineEdit_2->text().trimmed();

    // 非空判断
    if (user.isEmpty() || pwd.isEmpty())
    {
        QMessageBox::warning(this, "提示", "账号或密码不能为空！");
        return;
    }

    // 检查账号是否已存在
    bool userExists = false;
    QFile checkFile("user.txt");
    if (checkFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&checkFile);
        while (!in.atEnd())
        {
            QString line = in.readLine().trimmed();
            if (line.isEmpty()) continue;

            QStringList userInfo = line.split(" ");
            if (userInfo.size() >= 2)
            {
                QString existingUser = userInfo[0];
                if (existingUser == user)
                {
                    userExists = true;
                    break;
                }
            }
        }
        checkFile.close();
    }

    // 如果账号已存在 → 阻止注册
    if (userExists)
    {
        QMessageBox::warning(this, "提示", "❌ 该账号已被注册！");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        return;
    }
    QFile file("user.txt");
    if (file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&file);
        out << user << " " << pwd << "\n";
        file.close();
        QMessageBox::information(this, "成功", "✅ 注册成功！");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::information(this, "成功", "退出成功！");
    ui->stackedWidget->setCurrentIndex(0);
}
