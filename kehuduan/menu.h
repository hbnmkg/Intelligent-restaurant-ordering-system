#ifndef MENU_H
#define MENU_H

#include "mainwindow.h"
#include <QWidget>
#include <QListWidgetItem>
#include <QVector>
#include <QLabel>
#include <QMessageBox>
#include <QTimer>


// 🔥 菜品结构体：一行定义所有菜的信息
struct Dish {
    QString name;    // 菜名
    int price;       // 单价
    int* count;      // 指向你的份数变量
    QLabel* label;    // 显示份数的标签
};

extern int tableId;
extern int people_count;

namespace Ui
{
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

  public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

  private slots:
    void readServerData();  // 接收服务器回复

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_51_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_56_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_76_clicked();

    void on_pushButton_77_clicked();

    void on_pushButton_82_clicked();

    void on_pushButton_83_clicked();

    void on_pushButton_84_clicked();

    void on_pushButton_85_clicked();

    void on_pushButton_78_clicked();

    void on_pushButton_79_clicked();

    void on_pushButton_80_clicked();

    void on_pushButton_81_clicked();

    void on_pushButton_86_clicked();

    void on_pushButton_87_clicked();

    void on_pushButton_74_clicked();

    void on_pushButton_75_clicked();

    void on_pushButton_88_clicked();

    void on_pushButton_89_clicked();

    void on_pushButton_92_clicked();

    void on_pushButton_93_clicked();

    void on_pushButton_100_clicked();

    void on_pushButton_101_clicked();

    void on_pushButton_106_clicked();

    void on_pushButton_107_clicked();

    void on_pushButton_108_clicked();

    void on_pushButton_109_clicked();

    void on_pushButton_96_clicked();

    void on_pushButton_97_clicked();

    void on_pushButton_102_clicked();

    void on_pushButton_103_clicked();

    void on_pushButton_94_clicked();

    void on_pushButton_95_clicked();

    void on_pushButton_98_clicked();

    void on_pushButton_99_clicked();

    void on_pushButton_104_clicked();

    void on_pushButton_105_clicked();

    void on_pushButton_110_clicked();

    void on_pushButton_111_clicked();

    void on_pushButton_118_clicked();

    void on_pushButton_119_clicked();

    void on_pushButton_124_clicked();

    void on_pushButton_125_clicked();

    void on_pushButton_126_clicked();

    void on_pushButton_127_clicked();

    void on_pushButton_114_clicked();

    void on_pushButton_115_clicked();

    void on_pushButton_120_clicked();

    void on_pushButton_121_clicked();

    void on_pushButton_112_clicked();

    void on_pushButton_113_clicked();

    void on_pushButton_116_clicked();

    void on_pushButton_117_clicked();

    void on_pushButton_122_clicked();

    void on_pushButton_123_clicked();

    void on_pushButton_128_clicked();

    void on_pushButton_129_clicked();

    void on_pushButton_clicked();

private:
    Ui::menu *ui;

    int malaxiaolongxia_count;
    int ganguoxie_count;
    int shuizhuroupian_count;
    int tangcupaigu_count;
    int laomapashou_count;
    int wuhanreganmian_count;
    int niuroumian_count;
    int yangchunmian_count;
    int suancairousimian_count;
    int hongshaopaigumian_count;
    int zhajiangmian_count;
    int xiangganhuiguorou_count;
    int baochaotudousi_count;
    int hongshaoqiezi_count;
    int yuxiangrousi_count;
    int gongbaojiding_count;
    int liangbanjisi_count;
    int paojiaofengzhua_count;
    int koushuiji_count;
    int paihuanggua_count;
    int liangbanmuer_count;
    int xiaocongbandoufu_count;
    int liangbanhaidaisi_count;
    int liangbanjinzhengu_count;
    int pidandoufu_count;
    int yumipaigutang_count;
    int wujichashugutang_count;
    int dongguahaidaipaigutang_count;
    int lianoupaigutang_count;
    int yinerbaihelianzitang_count;
    int binghongcha_count;
    int wanglaoji_count;
    int xuebi_count;
    int baishikele_count;

    void update_cart(); // 加这一行
    QVector<Dish> m_dishes; // 所有菜品统一放这里
    QTcpSocket *tcpSocket; // 声明 socket 对象
};

#endif // MENU_H
