#include "menu.h"
#include "ui_menu.h"


menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);

    // 菜单栏居中
    for (int i = 0; i < ui->listWidget->count(); ++i)
    {
        QListWidgetItem *item = ui->listWidget->item(i);
        item->setTextAlignment(Qt::AlignCenter);
    }

    //显示图片
    //推荐
    QPixmap pix_1("/mnt/hgfs/VS/QT/kehuduan/picture/malaxiaolongxia.png");
    ui->label_4->setPixmap(pix_1);
    QPixmap pix_2("/mnt/hgfs/VS/QT/kehuduan/picture/ganguoxie.png");
    ui->label_17->setPixmap(pix_2);
    QPixmap pix_3("/mnt/hgfs/VS/QT/kehuduan/picture/shuizhuroupian.png");
    ui->label_5->setPixmap(pix_3);
    QPixmap pix_4("/mnt/hgfs/VS/QT/kehuduan/picture/tangcupaigu.png");
    ui->label_9->setPixmap(pix_4);
    QPixmap pix_5("/mnt/hgfs/VS/QT/kehuduan/picture/laomapashou.png");
    ui->label_21->setPixmap(pix_5);
    QPixmap pix_6("/mnt/hgfs/VS/QT/kehuduan/picture/wuhanreganmian.png");
    ui->label_13->setPixmap(pix_6);
    QPixmap pix_41("/mnt/hgfs/VS/QT/kehuduan/picture/lianoupaigutang.png");
    ui->label_32->setPixmap(pix_41);
    QPixmap pix_42("/mnt/hgfs/VS/QT/kehuduan/picture/wujichashugutang.png");
    ui->label_37->setPixmap(pix_42);
    QPixmap pix_43("/mnt/hgfs/VS/QT/kehuduan/picture/liangbanmuer.png");
    ui->label_41->setPixmap(pix_43);

    //面食
    QPixmap pix_7("/mnt/hgfs/VS/QT/kehuduan/picture/niuroumian.png");
    ui->label_60->setPixmap(pix_7);
    QPixmap pix_8("/mnt/hgfs/VS/QT/kehuduan/picture/yangchunmian.png");
    ui->label_93->setPixmap(pix_8);
    QPixmap pix_9("/mnt/hgfs/VS/QT/kehuduan/picture/suancairousimian.png");
    ui->label_97->setPixmap(pix_9);
    QPixmap pix_10("/mnt/hgfs/VS/QT/kehuduan/picture/hongshaopaigumian.png");
    ui->label_101->setPixmap(pix_10);
    QPixmap pix_11("/mnt/hgfs/VS/QT/kehuduan/picture/wuhanreganmian.png");
    ui->label_109->setPixmap(pix_11);
    QPixmap pix_12("/mnt/hgfs/VS/QT/kehuduan/picture/zhajiangmian.png");
    ui->label_113->setPixmap(pix_12);
    QPixmap pix_13("/mnt/hgfs/VS/QT/kehuduan/picture/laomapashou.png");
    ui->label_104->setPixmap(pix_13);

    //热菜
    QPixmap pix_14("/mnt/hgfs/VS/QT/kehuduan/picture/malaxiaolongxia.png");
    ui->label_62->setPixmap(pix_14);
    QPixmap pix_15("/mnt/hgfs/VS/QT/kehuduan/picture/ganguoxie.png");
    ui->label_154->setPixmap(pix_15);
    QPixmap pix_16("/mnt/hgfs/VS/QT/kehuduan/picture/tangcupaigu.png");
    ui->label_158->setPixmap(pix_16);
    QPixmap pix_17("/mnt/hgfs/VS/QT/kehuduan/picture/xiangganhuiguorou.png");
    ui->label_146->setPixmap(pix_17);
    QPixmap pix_18("/mnt/hgfs/VS/QT/kehuduan/picture/baochaotudousi.png");
    ui->label_150->setPixmap(pix_18);
    QPixmap pix_19("/mnt/hgfs/VS/QT/kehuduan/picture/hongshaoqiezi.png");
    ui->label_162->setPixmap(pix_19);
    QPixmap pix_20("/mnt/hgfs/VS/QT/kehuduan/picture/shuizhuroupian.png");
    ui->label_139->setPixmap(pix_20);
    QPixmap pix_21("/mnt/hgfs/VS/QT/kehuduan/picture/yuxiangrousi.png");
    ui->label_166->setPixmap(pix_21);
    QPixmap pix_22("/mnt/hgfs/VS/QT/kehuduan/picture/gongbaojiding.png");
    ui->label_174->setPixmap(pix_22);
    QPixmap pix_23("/mnt/hgfs/VS/QT/kehuduan/picture/liangbanjisi.png");
    ui->label_63->setPixmap(pix_23);
    QPixmap pix_24("/mnt/hgfs/VS/QT/kehuduan/picture/paojiaofengzhua.png");
    ui->label_201->setPixmap(pix_24);
    QPixmap pix_25("/mnt/hgfs/VS/QT/kehuduan/picture/koushuiji.png");
    ui->label_205->setPixmap(pix_25);
    QPixmap pix_26("/mnt/hgfs/VS/QT/kehuduan/picture/paihuanggua.png");
    ui->label_182->setPixmap(pix_26);
    QPixmap pix_27("/mnt/hgfs/VS/QT/kehuduan/picture/liangbanmuer.png");
    ui->label_193->setPixmap(pix_27);
    QPixmap pix_28("/mnt/hgfs/VS/QT/kehuduan/picture/xiaocongbandoufu.png");
    ui->label_178->setPixmap(pix_28);
    QPixmap pix_29("/mnt/hgfs/VS/QT/kehuduan/picture/liangbanhaidaisi.png");
    ui->label_186->setPixmap(pix_29);
    QPixmap pix_30("/mnt/hgfs/VS/QT/kehuduan/picture/liangbanjinzhengu.png");
    ui->label_197->setPixmap(pix_30);
    QPixmap pix_31("/mnt/hgfs/VS/QT/kehuduan/picture/pidandoufu.png");
    ui->label_209->setPixmap(pix_31);

    // 饮品
    QPixmap pix_32("/mnt/hgfs/VS/QT/kehuduan/picture/yumipaigutang.png");
    ui->label_64->setPixmap(pix_32);
    QPixmap pix_33("/mnt/hgfs/VS/QT/kehuduan/picture/wujichashugutang.png");
    ui->label_236->setPixmap(pix_33);
    QPixmap pix_34("/mnt/hgfs/VS/QT/kehuduan/picture/dongguahaidaipaigutang.png");
    ui->label_240->setPixmap(pix_34);
    QPixmap pix_35("/mnt/hgfs/VS/QT/kehuduan/picture/lianoupaigutang.png");
    ui->label_217->setPixmap(pix_35);
    QPixmap pix_36("/mnt/hgfs/VS/QT/kehuduan/picture/yinerbaihelianzitang.png");
    ui->label_228->setPixmap(pix_36);
    QPixmap pix_37("/mnt/hgfs/VS/QT/kehuduan/picture/binghongcha.png");
    ui->label_213->setPixmap(pix_37);
    QPixmap pix_38("/mnt/hgfs/VS/QT/kehuduan/picture/wanglaoji.png");
    ui->label_221->setPixmap(pix_38);
    QPixmap pix_39("/mnt/hgfs/VS/QT/kehuduan/picture/xuebi.png");
    ui->label_232->setPixmap(pix_39);
    QPixmap pix_40("/mnt/hgfs/VS/QT/kehuduan/picture/baishikele.png");
    ui->label_244->setPixmap(pix_40);

    // 初始化菜品列表
    m_dishes = {
        {"麻辣小龙虾", 40, &malaxiaolongxia_count, ui->label},
        {"干锅蟹",     45, &ganguoxie_count,       ui->label_20},
        {"水煮肉片",   30, &shuizhuroupian_count, ui->label_8},
        {"糖醋排骨",   40, &tangcupaigu_count,    ui->label_12},
        {"老麻扒手",   10, &laomapashou_count,    ui->label_24},
        {"武汉热干面",  5, &wuhanreganmian_count,  ui->label_16},
        {"莲藕排骨汤",   30, &lianoupaigutang_count,    ui->label_36},
        {"乌鸡茶树菇汤",   25, &wujichashugutang_count,    ui->label_40},
        {"凉拌木耳",  15, &liangbanmuer_count,  ui->label_44},//推荐
        {"牛肉面",   15, &niuroumian_count,    ui->label_92},
        {"阳春面",   15, &yangchunmian_count,    ui->label_96},
        {"酸菜肉丝面",  15, &suancairousimian_count,  ui->label_100},
        {"红烧排骨面",   20, &hongshaopaigumian_count,    ui->label_108},
        {"武汉热干面",  5, &wuhanreganmian_count,  ui->label_112},
        {"炸酱面",  10, &zhajiangmian_count,  ui->label_116},
        {"老麻扒手",   10, &laomapashou_count,    ui->label_107},//面食
        {"麻辣小龙虾", 40, &malaxiaolongxia_count, ui->label_145},
        {"干锅蟹",     45, &ganguoxie_count,       ui->label_157},
        {"糖醋排骨",   40, &tangcupaigu_count,    ui->label_161},
        {"香干回锅肉",   30, &xiangganhuiguorou_count,    ui->label_149},
        {"爆炒土豆丝",  15, &baochaotudousi_count,  ui->label_153},
        {"红烧茄子",  20, &hongshaoqiezi_count,  ui->label_165},
        {"水煮肉片",   30, &shuizhuroupian_count, ui->label_142},
        {"鱼香肉丝",  48, &yuxiangrousi_count,  ui->label_169},
        {"宫保鸡丁",  34, &gongbaojiding_count,  ui->label_177},//热菜
        {"凉拌鸡丝", 27, &liangbanjisi_count, ui->label_192},
        {"泡椒凤爪", 25, &paojiaofengzhua_count, ui->label_204},
        {"口水鸡", 35, &koushuiji_count, ui->label_208},
        {"拍黄瓜", 10, &paihuanggua_count, ui->label_185},
        {"凉拌木耳", 15, &liangbanmuer_count, ui->label_196},
        {"小葱拌豆腐", 14, &xiaocongbandoufu_count, ui->label_181},
        {"凉拌海带丝", 6, &liangbanhaidaisi_count, ui->label_189},
        {"凉拌金针菇", 12, &liangbanjinzhengu_count, ui->label_200},
        {"皮蛋豆腐", 14, &pidandoufu_count, ui->label_212},
        {"凉拌金针菇", 12, &liangbanjinzhengu_count, ui->label_200},
        {"皮蛋豆腐", 14, &pidandoufu_count, ui->label_212},//凉菜
        {"玉米排骨汤", 35, &yumipaigutang_count, ui->label_227},
        {"乌鸡茶树菇汤", 25, &wujichashugutang_count, ui->label_239},
        {"冬瓜海带排骨汤", 30, &dongguahaidaipaigutang_count, ui->label_243},
        {"莲藕排骨汤", 30, &lianoupaigutang_count, ui->label_220},
        {"银耳百合莲子汤", 15, &yinerbaihelianzitang_count, ui->label_231},
        {"冰红茶", 3, &binghongcha_count, ui->label_216},
        {"王老吉", 3, &wanglaoji_count, ui->label_224},
        {"雪碧", 4, &xuebi_count, ui->label_235},
        {"百事可乐", 4, &baishikele_count, ui->label_247},//饮品
    };

    for (int i = 0; i < m_dishes.size(); i++)
    {
        Dish &dish = m_dishes[i];
        *dish.count = 0;
        dish.label->setText("0");
    }

    // 显示文字
    ui->label_26->setText(QString("桌号：%1号桌  人数：%2人").arg(tableId).arg(people_count));

    // 设置字体：20号 + 加粗
    QFont font;
    font.setPointSize(15);
    font.setBold(true);
    ui->label_26->setFont(font);

    // 设置居中
    ui->label_26->setAlignment(Qt::AlignCenter);


    // 初始化 socket
       tcpSocket = new QTcpSocket(this);
       // 连接服务器
       tcpSocket->connectToHost(QHostAddress("192.168.103.36"), 50000);
       // 等待连接成功（可选，测试用）
       if(tcpSocket->waitForConnected(3000))
       {
           QString localIP = tcpSocket->localAddress().toString(); // 获取本机IP
               // 这里换成你自己的桌号变量、人数字段
               int table_id = tableId;    // 桌号
               int people_num = people_count; // 人数（你自己的变量名）

               // 拼接成服务器能识别的格式
               QString sendData = QString("ip:%1;table:%2;people:%3;")
                                  .arg(localIP)
                                  .arg(table_id)
                                  .arg(people_num);

               // 发送给服务器
               tcpSocket->write(sendData.toUtf8());
               tcpSocket->flush();
               QTimer::singleShot(200, this, [=]() {
               QMessageBox::information(this, "欢迎光临", "祝您用餐愉快！");
               });
       }
       else
       {
           // 延迟弹框
           QTimer::singleShot(200, this, [=]() {
           QMessageBox::warning(this, "提示", "您未接入服务器！");
           });
       }

       setWindowTitle("点餐窗口");

       connect(tcpSocket, &QTcpSocket::readyRead, this, &menu::readServerData);
}

menu::~menu() { delete ui; }

void menu::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString category = item->text();

    if (category == "推荐")
    {
        // 推荐 → 显示所有 6 个菜
        ui->stackedWidget->setCurrentIndex(0);
    }
    else if (category == "面食")
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if (category == "热菜")
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if (category == "凉菜")
    {
        ui->stackedWidget->setCurrentIndex(3);
    }
    else if (category == "饮品")
    {
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if (category == "订单")
    {
        ui->stackedWidget->setCurrentIndex(5);
        update_cart();
    }
}


void menu::update_cart()
{
    // 1. 清空整个表格
    ui->tableWidget->clear();

    // 2. 重新设置表格结构
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels({"菜名", "份数", "单价"});
    ui->tableWidget->horizontalHeader()->setVisible(true);  //显示表头

    // 3. 样式
    ui->tableWidget->verticalHeader()->setFixedWidth(50);
    ui->tableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    while (ui->tableWidget->rowCount() > 0)
    {
        ui->tableWidget->removeRow(0);
    }

    QSet<QString> alreadyAdded;  // 已经加过的菜，不再加第二次
    int total = 0;

    for (int i = 0; i < m_dishes.size(); i++)
    {
        const Dish& dish = m_dishes[i];
        int cnt = *dish.count;

        // 同一个菜，只加一次！
        if (cnt > 0 && !alreadyAdded.contains(dish.name))
        {
            alreadyAdded.insert(dish.name); // 标记已添加

            int row = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(row);

            QTableWidgetItem *nameItem = new QTableWidgetItem(dish.name);
            nameItem->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(row, 0, nameItem);

            QTableWidgetItem *cntItem = new QTableWidgetItem(QString::number(cnt));
            cntItem->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(row, 1, cntItem);

            QTableWidgetItem *priceItem = new QTableWidgetItem(QString::number(dish.price) + "元");
            priceItem->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(row, 2, priceItem);

            total += cnt * dish.price;
        }
    }

    ui->label_25->setText(QString("<span style='font-size:22px; font-weight:bold;'>总价：%1 元</span>").arg(total));
}

// 接收服务器回复
void menu::readServerData()
{
    // 读取服务器发来的消息
    QByteArray ba = tcpSocket->readAll();
    QString msg = ba;

    // 🔥 收到服务器关闭指令
    if(msg == "SERVER_CLOSE")
    {
        QMessageBox::warning(this, "服务器通知", "服务器已关闭，程序即将退出！");
        tcpSocket->close();
        this->close();
        return;
    }
    if(msg.contains("SERVER_TABLE_OK"))
    {
        QMessageBox::information(this, "呼叫成功", "前台已收到您的服务请求！");
    }
    else if (msg.contains("SERVER_ORDER_OK"))
    {
        QMessageBox::information(this, "下单成功", "订单已发送至服务器！");

        // 清空购物车
        for (int i = 0; i < m_dishes.size(); i++) {
            Dish& dish = m_dishes[i];
            *dish.count = 0;
            dish.label->setText("0");
        }
        update_cart();
    }
}

void menu::on_pushButton_15_clicked()
{
    // 1. 判断有没有点菜
    bool has_order = false;
    for (int i = 0; i < m_dishes.size(); i++) {
        const Dish& dish = m_dishes[i];
        if (*dish.count > 0) {
            has_order = true;
            break;
        }
    }
    if (!has_order) {
        QMessageBox::warning(this, "提示", "您还没有点任何菜！");
        return;
    }

    QString send_data;
    int total_price = 0;
    QSet<QString> alreadySend; // 去重

    for (int i = 0; i < m_dishes.size(); i++) {
        const Dish& dish = m_dishes[i];
        int cnt = *dish.count;

        // 菜名已经发过
        if (cnt > 0 && !alreadySend.contains(dish.name)) {
            send_data += QString("%1:%2:%3;").arg(dish.name).arg(cnt).arg(dish.price);
            total_price += cnt * dish.price;
            alreadySend.insert(dish.name);
        }
    }
    send_data += QString("total:%1").arg(total_price);

    // 发送
    if (tcpSocket->state() == QAbstractSocket::ConnectedState)
    {
        tcpSocket->write(send_data.toUtf8());
        tcpSocket->flush();
    }
    else
    {
        QMessageBox::warning(this, "错误", "未连接到服务器！");
    }
}

void menu::on_pushButton_16_clicked()
{
    // 拼接呼叫信息（带桌号）
    QString send_data = QString("CALL_SERVICE:%1").arg(tableId);

    if (tcpSocket->state() == QAbstractSocket::ConnectedState)
    {
        tcpSocket->write(send_data.toUtf8());
        tcpSocket->flush();
    }
    else
    {
        QMessageBox::warning(this, "错误", "未连接到服务器，无法呼叫！");
    }
}



void menu::on_pushButton_2_clicked()
{
    if (malaxiaolongxia_count > 0)
    {
        malaxiaolongxia_count--;
    }
    ui->label->setText(QString::number(malaxiaolongxia_count));
    ui->label_145->setText(QString::number(malaxiaolongxia_count));
}

void menu::on_pushButton_3_clicked()
{
    malaxiaolongxia_count++;
    ui->label->setText(QString::number(malaxiaolongxia_count));
    ui->label_145->setText(QString::number(malaxiaolongxia_count));
}

void menu::on_pushButton_10_clicked()
{
    if (ganguoxie_count > 0)
    {
        ganguoxie_count--;
    }
    ui->label_20->setText(QString::number(ganguoxie_count));
    ui->label_157->setText(QString::number(ganguoxie_count));
}

void menu::on_pushButton_11_clicked()
{
    ganguoxie_count++;
    ui->label_20->setText(QString::number(ganguoxie_count));
    ui->label_157->setText(QString::number(ganguoxie_count));
}

void menu::on_pushButton_4_clicked()
{
    if (shuizhuroupian_count > 0)
    {
        shuizhuroupian_count--;
    }
    ui->label_8->setText(QString::number(shuizhuroupian_count));
    ui->label_142->setText(QString::number(shuizhuroupian_count));

}

void menu::on_pushButton_5_clicked()
{
    shuizhuroupian_count++;
    ui->label_8->setText(QString::number(shuizhuroupian_count));
    ui->label_142->setText(QString::number(shuizhuroupian_count));
}

void menu::on_pushButton_6_clicked()
{
    if (tangcupaigu_count > 0)
    {
        tangcupaigu_count--;
    }
    ui->label_12->setText(QString::number(tangcupaigu_count));
    ui->label_161->setText(QString::number(tangcupaigu_count));
}

void menu::on_pushButton_7_clicked()
{
    tangcupaigu_count++;
    ui->label_12->setText(QString::number(tangcupaigu_count));
    ui->label_161->setText(QString::number(tangcupaigu_count));
}

void menu::on_pushButton_12_clicked()
{
    if (laomapashou_count > 0)
    {
        laomapashou_count--;
    }
    ui->label_24->setText(QString::number(laomapashou_count));
    ui->label_107->setText(QString::number(laomapashou_count));
}

void menu::on_pushButton_13_clicked()
{
    laomapashou_count++;
    ui->label_24->setText(QString::number(laomapashou_count));
    ui->label_107->setText(QString::number(laomapashou_count));
}

// 武汉热干面 - 号
void menu::on_pushButton_8_clicked()
{
    if (wuhanreganmian_count > 0)
    {
        wuhanreganmian_count--;
    }
    ui->label_16->setText(QString::number(wuhanreganmian_count));
    ui->label_112->setText(QString::number(wuhanreganmian_count));
}

// 武汉热干面 + 号
void menu::on_pushButton_9_clicked()
{
    wuhanreganmian_count++;
    ui->label_16->setText(QString::number(wuhanreganmian_count));
    ui->label_112->setText(QString::number(wuhanreganmian_count));
}


void menu::on_pushButton_18_clicked()
{
    if (lianoupaigutang_count > 0)
    {
        lianoupaigutang_count--;
    }
    ui->label_36->setText(QString::number(lianoupaigutang_count));
    ui->label_220->setText(QString::number(lianoupaigutang_count));
}

void menu::on_pushButton_19_clicked()
{
    lianoupaigutang_count++;
    ui->label_36->setText(QString::number(lianoupaigutang_count));
    ui->label_220->setText(QString::number(lianoupaigutang_count));
}

void menu::on_pushButton_20_clicked()
{
    if (wujichashugutang_count > 0)
    {
        wujichashugutang_count--;
    }
    ui->label_40->setText(QString::number(wujichashugutang_count));
    ui->label_239->setText(QString::number(wujichashugutang_count));
}

void menu::on_pushButton_21_clicked()
{
    wujichashugutang_count++;
    ui->label_40->setText(QString::number(wujichashugutang_count));
    ui->label_239->setText(QString::number(wujichashugutang_count));
}

void menu::on_pushButton_22_clicked()
{
    if (liangbanmuer_count > 0)
    {
        liangbanmuer_count--;
    }
    ui->label_44->setText(QString::number(liangbanmuer_count));
    ui->label_196->setText(QString::number(liangbanmuer_count));
}

void menu::on_pushButton_23_clicked()
{
    liangbanmuer_count++;
    ui->label_44->setText(QString::number(liangbanmuer_count));
    ui->label_196->setText(QString::number(liangbanmuer_count));
}

void menu::on_pushButton_46_clicked()
{
    if (niuroumian_count > 0)
    {
        niuroumian_count--;
    }
    ui->label_92->setText(QString::number(niuroumian_count));
}

void menu::on_pushButton_47_clicked()
{
    niuroumian_count++;
    ui->label_92->setText(QString::number(niuroumian_count));
}

void menu::on_pushButton_48_clicked()
{
    if (yangchunmian_count > 0)
    {
        yangchunmian_count--;
    }
    ui->label_96->setText(QString::number(yangchunmian_count));
}

void menu::on_pushButton_49_clicked()
{
    yangchunmian_count++;
    ui->label_96->setText(QString::number(yangchunmian_count));
}

void menu::on_pushButton_50_clicked()
{
    if (suancairousimian_count > 0)
    {
        suancairousimian_count--;
    }
    ui->label_100->setText(QString::number(suancairousimian_count));
}

void menu::on_pushButton_51_clicked()
{
    suancairousimian_count++;
    ui->label_100->setText(QString::number(suancairousimian_count));
}

void menu::on_pushButton_54_clicked()
{
    if (hongshaopaigumian_count > 0)
    {
        hongshaopaigumian_count--;
    }
    ui->label_108->setText(QString::number(hongshaopaigumian_count));
}

void menu::on_pushButton_55_clicked()
{
    hongshaopaigumian_count++;
    ui->label_108->setText(QString::number(hongshaopaigumian_count));
}

void menu::on_pushButton_56_clicked()
{
    if (wuhanreganmian_count > 0)
    {
        wuhanreganmian_count--;
    }
    ui->label_16->setText(QString::number(wuhanreganmian_count));
    ui->label_112->setText(QString::number(wuhanreganmian_count));
}

void menu::on_pushButton_57_clicked()
{
    wuhanreganmian_count++;
    ui->label_16->setText(QString::number(wuhanreganmian_count));
    ui->label_112->setText(QString::number(wuhanreganmian_count));
}

void menu::on_pushButton_58_clicked()
{
    if (zhajiangmian_count > 0)
    {
        zhajiangmian_count--;
    }
    ui->label_116->setText(QString::number(zhajiangmian_count));
}

void menu::on_pushButton_59_clicked()
{
    zhajiangmian_count++;
    ui->label_116->setText(QString::number(zhajiangmian_count));
}

void menu::on_pushButton_52_clicked()
{
    if (laomapashou_count > 0)
    {
        laomapashou_count--;
    }
    ui->label_24->setText(QString::number(laomapashou_count));
    ui->label_107->setText(QString::number(laomapashou_count));
}

void menu::on_pushButton_53_clicked()
{
    laomapashou_count++;
    ui->label_24->setText(QString::number(laomapashou_count));
    ui->label_107->setText(QString::number(laomapashou_count));
}

void menu::on_pushButton_76_clicked()
{
    if (malaxiaolongxia_count > 0)
    {
        malaxiaolongxia_count--;
    }
    ui->label->setText(QString::number(malaxiaolongxia_count));
    ui->label_145->setText(QString::number(malaxiaolongxia_count));
}

void menu::on_pushButton_77_clicked()
{
    malaxiaolongxia_count++;
    ui->label->setText(QString::number(malaxiaolongxia_count));
    ui->label_145->setText(QString::number(malaxiaolongxia_count));
}

void menu::on_pushButton_82_clicked()
{
    if (ganguoxie_count > 0)
    {
        ganguoxie_count--;
    }
    ui->label_20->setText(QString::number(ganguoxie_count));
    ui->label_157->setText(QString::number(ganguoxie_count));
}

void menu::on_pushButton_83_clicked()
{
    ganguoxie_count++;
    ui->label_20->setText(QString::number(ganguoxie_count));
    ui->label_157->setText(QString::number(ganguoxie_count));
}

void menu::on_pushButton_84_clicked()
{
    if (tangcupaigu_count > 0)
    {
        tangcupaigu_count--;
    }
    ui->label_12->setText(QString::number(tangcupaigu_count));
    ui->label_161->setText(QString::number(tangcupaigu_count));
}

void menu::on_pushButton_85_clicked()
{
    tangcupaigu_count++;
    ui->label_12->setText(QString::number(tangcupaigu_count));
    ui->label_161->setText(QString::number(tangcupaigu_count));
}

void menu::on_pushButton_78_clicked()
{
    if (xiangganhuiguorou_count > 0)
    {
        xiangganhuiguorou_count--;
    }
    ui->label_149->setText(QString::number(xiangganhuiguorou_count));
}

void menu::on_pushButton_79_clicked()
{
    xiangganhuiguorou_count++;
    ui->label_149->setText(QString::number(xiangganhuiguorou_count));
}


void menu::on_pushButton_80_clicked()
{
    if (baochaotudousi_count > 0)
    {
        baochaotudousi_count--;
    }
    ui->label_153->setText(QString::number(baochaotudousi_count));
}

void menu::on_pushButton_81_clicked()
{
    baochaotudousi_count++;
    ui->label_153->setText(QString::number(baochaotudousi_count));
}

void menu::on_pushButton_86_clicked()
{
    if (hongshaoqiezi_count > 0)
    {
        hongshaoqiezi_count--;
    }
    ui->label_165->setText(QString::number(hongshaoqiezi_count));
}

void menu::on_pushButton_87_clicked()
{
    hongshaoqiezi_count++;
    ui->label_165->setText(QString::number(hongshaoqiezi_count));
}

void menu::on_pushButton_74_clicked()
{
    if (shuizhuroupian_count > 0)
    {
        shuizhuroupian_count--;
    }
    ui->label_8->setText(QString::number(shuizhuroupian_count));
    ui->label_142->setText(QString::number(shuizhuroupian_count));
}

void menu::on_pushButton_75_clicked()
{
    shuizhuroupian_count++;
    ui->label_8->setText(QString::number(shuizhuroupian_count));
    ui->label_142->setText(QString::number(shuizhuroupian_count));
}

void menu::on_pushButton_88_clicked()
{
    if (yuxiangrousi_count > 0)
    {
        yuxiangrousi_count--;
    }
    ui->label_169->setText(QString::number(yuxiangrousi_count));
}

void menu::on_pushButton_89_clicked()
{
    yuxiangrousi_count++;
    ui->label_169->setText(QString::number(yuxiangrousi_count));
}

void menu::on_pushButton_92_clicked()
{
    if (gongbaojiding_count > 0)
    {
        gongbaojiding_count--;
    }
    ui->label_177->setText(QString::number(gongbaojiding_count));
}

void menu::on_pushButton_93_clicked()
{
    gongbaojiding_count++;
    ui->label_177->setText(QString::number(gongbaojiding_count));
}

void menu::on_pushButton_100_clicked()
{
    if (liangbanjisi_count > 0)
    {
        liangbanjisi_count--;
    }
    ui->label_192->setText(QString::number(liangbanjisi_count));
}

void menu::on_pushButton_101_clicked()
{
    liangbanjisi_count++;
    ui->label_192->setText(QString::number(liangbanjisi_count));
}

void menu::on_pushButton_106_clicked()
{
    if (paojiaofengzhua_count > 0)
    {
        paojiaofengzhua_count--;
    }
    ui->label_204->setText(QString::number(paojiaofengzhua_count));
}

void menu::on_pushButton_107_clicked()
{
    paojiaofengzhua_count++;
    ui->label_204->setText(QString::number(paojiaofengzhua_count));
}

void menu::on_pushButton_108_clicked()
{
    if (koushuiji_count > 0)
    {
        koushuiji_count--;
    }
    ui->label_208->setText(QString::number(koushuiji_count));
}

void menu::on_pushButton_109_clicked()
{
    koushuiji_count++;
    ui->label_208->setText(QString::number(koushuiji_count));
}

void menu::on_pushButton_96_clicked()
{
    if (paihuanggua_count > 0)
    {
        paihuanggua_count--;
    }
    ui->label_185->setText(QString::number(paihuanggua_count));
}

void menu::on_pushButton_97_clicked()
{
    paihuanggua_count++;
    ui->label_185->setText(QString::number(paihuanggua_count));
}

void menu::on_pushButton_102_clicked()
{
    if (liangbanmuer_count > 0)
    {
        liangbanmuer_count--;
    }
    ui->label_44->setText(QString::number(liangbanmuer_count));
    ui->label_196->setText(QString::number(liangbanmuer_count));
}

void menu::on_pushButton_103_clicked()
{
    liangbanmuer_count++;
    ui->label_44->setText(QString::number(liangbanmuer_count));
    ui->label_196->setText(QString::number(liangbanmuer_count));
}

void menu::on_pushButton_94_clicked()
{
    if (xiaocongbandoufu_count > 0)
    {
        xiaocongbandoufu_count--;
    }
    ui->label_181->setText(QString::number(xiaocongbandoufu_count));
}

void menu::on_pushButton_95_clicked()
{
    xiaocongbandoufu_count++;
    ui->label_181->setText(QString::number(xiaocongbandoufu_count));
}

void menu::on_pushButton_98_clicked()
{
    if (liangbanhaidaisi_count > 0)
    {
        liangbanhaidaisi_count--;
    }
    ui->label_189->setText(QString::number(liangbanhaidaisi_count));
}

void menu::on_pushButton_99_clicked()
{
    liangbanhaidaisi_count++;
    ui->label_189->setText(QString::number(liangbanhaidaisi_count));
}

void menu::on_pushButton_104_clicked()
{
    if (liangbanjinzhengu_count > 0)
    {
        liangbanjinzhengu_count--;
    }
    ui->label_200->setText(QString::number(liangbanjinzhengu_count));
}

void menu::on_pushButton_105_clicked()
{
    liangbanjinzhengu_count++;
    ui->label_200->setText(QString::number(liangbanjinzhengu_count));
}

void menu::on_pushButton_110_clicked()
{
    if (pidandoufu_count > 0)
    {
        pidandoufu_count--;
    }
    ui->label_212->setText(QString::number(pidandoufu_count));
}

void menu::on_pushButton_111_clicked()
{
    pidandoufu_count++;
    ui->label_212->setText(QString::number(pidandoufu_count));
}

void menu::on_pushButton_118_clicked()
{
    if (yumipaigutang_count > 0)
    {
        yumipaigutang_count--;
    }
    ui->label_227->setText(QString::number(yumipaigutang_count));
}

void menu::on_pushButton_119_clicked()
{
    yumipaigutang_count++;
    ui->label_227->setText(QString::number(yumipaigutang_count));
}

void menu::on_pushButton_124_clicked()
{
    if (wujichashugutang_count > 0)
    {
        wujichashugutang_count--;
    }
    ui->label_40->setText(QString::number(wujichashugutang_count));
    ui->label_239->setText(QString::number(wujichashugutang_count));
}

void menu::on_pushButton_125_clicked()
{
    wujichashugutang_count++;
    ui->label_40->setText(QString::number(wujichashugutang_count));
    ui->label_239->setText(QString::number(wujichashugutang_count));
}

void menu::on_pushButton_126_clicked()
{
    if (dongguahaidaipaigutang_count > 0)
    {
        dongguahaidaipaigutang_count--;
    }
    ui->label_243->setText(QString::number(dongguahaidaipaigutang_count));
}

void menu::on_pushButton_127_clicked()
{
    dongguahaidaipaigutang_count++;
    ui->label_243->setText(QString::number(dongguahaidaipaigutang_count));
}

void menu::on_pushButton_114_clicked()
{
    if (lianoupaigutang_count > 0)
    {
        lianoupaigutang_count--;
    }
    ui->label_36->setText(QString::number(lianoupaigutang_count));
    ui->label_220->setText(QString::number(lianoupaigutang_count));
}

void menu::on_pushButton_115_clicked()
{
    lianoupaigutang_count++;
    ui->label_36->setText(QString::number(lianoupaigutang_count));
    ui->label_220->setText(QString::number(lianoupaigutang_count));
}

void menu::on_pushButton_120_clicked()
{
    if (yinerbaihelianzitang_count > 0)
    {
        yinerbaihelianzitang_count--;
    }
    ui->label_231->setText(QString::number(yinerbaihelianzitang_count));
}

void menu::on_pushButton_121_clicked()
{
    yinerbaihelianzitang_count++;
    ui->label_231->setText(QString::number(yinerbaihelianzitang_count));
}

void menu::on_pushButton_112_clicked()
{
    if (binghongcha_count > 0)
    {
        binghongcha_count--;
    }
    ui->label_216->setText(QString::number(binghongcha_count));
}

void menu::on_pushButton_113_clicked()
{
    binghongcha_count++;
    ui->label_216->setText(QString::number(binghongcha_count));
}

void menu::on_pushButton_116_clicked()
{
    if (wanglaoji_count > 0)
    {
        wanglaoji_count--;
    }
    ui->label_224->setText(QString::number(wanglaoji_count));
}

void menu::on_pushButton_117_clicked()
{
    wanglaoji_count++;
    ui->label_224->setText(QString::number(wanglaoji_count));
}

void menu::on_pushButton_122_clicked()
{
    if (xuebi_count > 0)
    {
        xuebi_count--;
    }
    ui->label_235->setText(QString::number(xuebi_count));
}

void menu::on_pushButton_123_clicked()
{
    xuebi_count++;
    ui->label_235->setText(QString::number(xuebi_count));
}

void menu::on_pushButton_128_clicked()
{
    if (baishikele_count > 0)
    {
        baishikele_count--;
    }
    ui->label_247->setText(QString::number(baishikele_count));
}

void menu::on_pushButton_129_clicked()
{
    baishikele_count++;
    ui->label_247->setText(QString::number(baishikele_count));
}

void menu::on_pushButton_clicked()
{
    QMessageBox::information(this, "提示", "谢谢惠顾，欢迎下次再来！");
    // 关闭当前窗口
    this->close();
    MainWindow *w = new MainWindow;
    w->show();
}
