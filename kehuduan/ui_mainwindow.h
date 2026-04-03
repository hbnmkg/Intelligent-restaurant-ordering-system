/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 150, 441, 271));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(600, 210, 151, 41));
        QFont font;
        font.setPointSize(20);
        comboBox_2->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(520, 280, 67, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 210, 67, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 340, 181, 61));
        QFont font1;
        font1.setPointSize(30);
        pushButton->setFont(font1);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(600, 280, 151, 41));
        comboBox->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 20, 601, 81));
        label_4->setStyleSheet(QString::fromUtf8("/* \346\214\211\351\222\256\350\203\214\346\231\257\350\211\262 */\n"
"background-color: rgb(190, 0, 0);\n"
"/* \346\226\207\345\255\227\351\242\234\350\211\262\357\274\210\345\217\257\351\200\211\357\274\214\350\256\276\344\270\272\347\231\275\350\211\262\346\233\264\351\206\222\347\233\256\357\274\211 */\n"
"color: black;\n"
"/* \346\214\211\351\222\256\350\276\271\346\241\206\357\274\210\345\217\257\351\200\211\357\274\211 */\n"
"border: 0px solid white;\n"
"border-radius: 8px;\n"
"\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QString());
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1\345\217\267\346\241\214", 0)
         << QApplication::translate("MainWindow", "2\345\217\267\346\241\214", 0)
         << QApplication::translate("MainWindow", "3\345\217\267\346\241\214", 0)
         << QApplication::translate("MainWindow", "4\345\217\267\346\241\214", 0)
         << QApplication::translate("MainWindow", "5\345\217\267\346\241\214", 0)
        );
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">\344\272\272\346\225\260</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">\346\241\214\345\217\267</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1\344\272\272", 0)
         << QApplication::translate("MainWindow", "2\344\272\272", 0)
         << QApplication::translate("MainWindow", "3\344\272\272", 0)
         << QApplication::translate("MainWindow", "4\344\272\272", 0)
         << QApplication::translate("MainWindow", "5\344\272\272", 0)
         << QApplication::translate("MainWindow", "6\344\272\272", 0)
         << QApplication::translate("MainWindow", "7\344\272\272", 0)
         << QApplication::translate("MainWindow", "8\344\272\272", 0)
        );
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600;\">\346\254\242\350\277\216\346\235\245\345\210\260\346\265\267\345\272\225\346\215\236\347\201\253\351\224\205</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
