#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("/mnt/hgfs/VS/QT/kehuduan/picture/haidilao.png"); // 资源文件路径，或本地路径
    // 让图片自适应 label 大小
    ui->label->setPixmap(pix.scaled(ui->label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    setWindowTitle("点餐窗口");
}

MainWindow::~MainWindow() { delete ui; }

int tableId;
int people_count;

void MainWindow::on_pushButton_clicked()
{

    // 1. 获取桌号
    QString tableText = ui->comboBox_2->currentText();
    tableId = tableText.remove("号桌").toInt();

    // 2. 获取人数
    QString peopleText = ui->comboBox->currentText();
    people_count = peopleText.remove("人").toInt();

    this->close();
    menu *w = new menu;
    w->show();
}
