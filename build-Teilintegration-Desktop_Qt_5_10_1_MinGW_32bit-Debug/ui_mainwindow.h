/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_schueler;
    QTableView *schuelerplan;
    QComboBox *wunsch1;
    QLineEdit *vorname;
    QLabel *lbl_vorname;
    QLineEdit *nachname;
    QLabel *lbl_nachname;
    QLabel *lbl_wuensche;
    QComboBox *wunsch3;
    QComboBox *wunsch2;
    QWidget *tab_lehrer;
    QLabel *lbl_lehrkraft;
    QTableView *lehrerplan;
    QComboBox *lehrerauswahl;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(779, 486);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(5, 5, 771, 451));
        tab_schueler = new QWidget();
        tab_schueler->setObjectName(QStringLiteral("tab_schueler"));
        tab_schueler->setEnabled(true);
        schuelerplan = new QTableView(tab_schueler);
        schuelerplan->setObjectName(QStringLiteral("schuelerplan"));
        schuelerplan->setGeometry(QRect(150, 30, 601, 391));
        wunsch1 = new QComboBox(tab_schueler);
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->addItem(QString());
        wunsch1->setObjectName(QStringLiteral("wunsch1"));
        wunsch1->setGeometry(QRect(10, 160, 111, 22));
        vorname = new QLineEdit(tab_schueler);
        vorname->setObjectName(QStringLiteral("vorname"));
        vorname->setGeometry(QRect(10, 30, 113, 20));
        lbl_vorname = new QLabel(tab_schueler);
        lbl_vorname->setObjectName(QStringLiteral("lbl_vorname"));
        lbl_vorname->setGeometry(QRect(10, 10, 71, 16));
        nachname = new QLineEdit(tab_schueler);
        nachname->setObjectName(QStringLiteral("nachname"));
        nachname->setGeometry(QRect(10, 90, 113, 20));
        lbl_nachname = new QLabel(tab_schueler);
        lbl_nachname->setObjectName(QStringLiteral("lbl_nachname"));
        lbl_nachname->setGeometry(QRect(10, 70, 71, 16));
        lbl_wuensche = new QLabel(tab_schueler);
        lbl_wuensche->setObjectName(QStringLiteral("lbl_wuensche"));
        lbl_wuensche->setGeometry(QRect(10, 140, 91, 16));
        wunsch3 = new QComboBox(tab_schueler);
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->addItem(QString());
        wunsch3->setObjectName(QStringLiteral("wunsch3"));
        wunsch3->setGeometry(QRect(10, 220, 111, 22));
        wunsch2 = new QComboBox(tab_schueler);
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->addItem(QString());
        wunsch2->setObjectName(QStringLiteral("wunsch2"));
        wunsch2->setGeometry(QRect(10, 190, 111, 22));
        tabWidget->addTab(tab_schueler, QString());
        tab_lehrer = new QWidget();
        tab_lehrer->setObjectName(QStringLiteral("tab_lehrer"));
        lbl_lehrkraft = new QLabel(tab_lehrer);
        lbl_lehrkraft->setObjectName(QStringLiteral("lbl_lehrkraft"));
        lbl_lehrkraft->setGeometry(QRect(10, 10, 51, 16));
        lehrerplan = new QTableView(tab_lehrer);
        lehrerplan->setObjectName(QStringLiteral("lehrerplan"));
        lehrerplan->setGeometry(QRect(150, 30, 601, 391));
        lehrerauswahl = new QComboBox(tab_lehrer);
        lehrerauswahl->addItem(QString());
        lehrerauswahl->addItem(QString());
        lehrerauswahl->setObjectName(QStringLiteral("lehrerauswahl"));
        lehrerauswahl->setGeometry(QRect(10, 30, 131, 22));
        tabWidget->addTab(tab_lehrer, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        wunsch1->setItemText(0, QApplication::translate("MainWindow", "-- kein Wunsch --", nullptr));
        wunsch1->setItemText(1, QApplication::translate("MainWindow", "Bio", nullptr));
        wunsch1->setItemText(2, QApplication::translate("MainWindow", "Chemie", nullptr));
        wunsch1->setItemText(3, QApplication::translate("MainWindow", "Englisch", nullptr));
        wunsch1->setItemText(4, QApplication::translate("MainWindow", "Deutsch", nullptr));
        wunsch1->setItemText(5, QApplication::translate("MainWindow", "Englisch", nullptr));
        wunsch1->setItemText(6, QApplication::translate("MainWindow", "Franz\303\266sisch", nullptr));
        wunsch1->setItemText(7, QApplication::translate("MainWindow", "Geografie", nullptr));
        wunsch1->setItemText(8, QApplication::translate("MainWindow", "Geschichte", nullptr));
        wunsch1->setItemText(9, QApplication::translate("MainWindow", "Informatik", nullptr));
        wunsch1->setItemText(10, QApplication::translate("MainWindow", "Kunst", nullptr));
        wunsch1->setItemText(11, QApplication::translate("MainWindow", "Mathe", nullptr));
        wunsch1->setItemText(12, QApplication::translate("MainWindow", "Musik", nullptr));
        wunsch1->setItemText(13, QApplication::translate("MainWindow", "Latein", nullptr));
        wunsch1->setItemText(14, QApplication::translate("MainWindow", "Philosophie", nullptr));
        wunsch1->setItemText(15, QApplication::translate("MainWindow", "Physik", nullptr));
        wunsch1->setItemText(16, QApplication::translate("MainWindow", "Religion", nullptr));
        wunsch1->setItemText(17, QApplication::translate("MainWindow", "Spanisch", nullptr));
        wunsch1->setItemText(18, QApplication::translate("MainWindow", "Sport", nullptr));
        wunsch1->setItemText(19, QApplication::translate("MainWindow", "WiPo", nullptr));

        lbl_vorname->setText(QApplication::translate("MainWindow", "Vorname", nullptr));
        lbl_nachname->setText(QApplication::translate("MainWindow", "Nachname", nullptr));
        lbl_wuensche->setText(QApplication::translate("MainWindow", "Sch\303\274lerw\303\274nsche", nullptr));
        wunsch3->setItemText(0, QApplication::translate("MainWindow", "-- kein Wunsch --", nullptr));
        wunsch3->setItemText(1, QApplication::translate("MainWindow", "Bio", nullptr));
        wunsch3->setItemText(2, QApplication::translate("MainWindow", "Chemie", nullptr));
        wunsch3->setItemText(3, QApplication::translate("MainWindow", "Englisch", nullptr));
        wunsch3->setItemText(4, QApplication::translate("MainWindow", "Deutsch", nullptr));
        wunsch3->setItemText(5, QApplication::translate("MainWindow", "Englisch", nullptr));
        wunsch3->setItemText(6, QApplication::translate("MainWindow", "Franz\303\266sisch", nullptr));
        wunsch3->setItemText(7, QApplication::translate("MainWindow", "Geografie", nullptr));
        wunsch3->setItemText(8, QApplication::translate("MainWindow", "Geschichte", nullptr));
        wunsch3->setItemText(9, QApplication::translate("MainWindow", "Informatik", nullptr));
        wunsch3->setItemText(10, QApplication::translate("MainWindow", "Kunst", nullptr));
        wunsch3->setItemText(11, QApplication::translate("MainWindow", "Mathe", nullptr));
        wunsch3->setItemText(12, QApplication::translate("MainWindow", "Musik", nullptr));
        wunsch3->setItemText(13, QApplication::translate("MainWindow", "Latein", nullptr));
        wunsch3->setItemText(14, QApplication::translate("MainWindow", "Philosophie", nullptr));
        wunsch3->setItemText(15, QApplication::translate("MainWindow", "Physik", nullptr));
        wunsch3->setItemText(16, QApplication::translate("MainWindow", "Religion", nullptr));
        wunsch3->setItemText(17, QApplication::translate("MainWindow", "Spanisch", nullptr));
        wunsch3->setItemText(18, QApplication::translate("MainWindow", "Sport", nullptr));
        wunsch3->setItemText(19, QApplication::translate("MainWindow", "WiPo", nullptr));

        wunsch2->setItemText(0, QApplication::translate("MainWindow", "-- kein Wunsch --", nullptr));
        wunsch2->setItemText(1, QApplication::translate("MainWindow", "Bio", nullptr));
        wunsch2->setItemText(2, QApplication::translate("MainWindow", "Chemie", nullptr));
        wunsch2->setItemText(3, QApplication::translate("MainWindow", "Englisch", nullptr));
        wunsch2->setItemText(4, QApplication::translate("MainWindow", "Deutsch", nullptr));
        wunsch2->setItemText(5, QApplication::translate("MainWindow", "Englisch", nullptr));
        wunsch2->setItemText(6, QApplication::translate("MainWindow", "Franz\303\266sisch", nullptr));
        wunsch2->setItemText(7, QApplication::translate("MainWindow", "Geografie", nullptr));
        wunsch2->setItemText(8, QApplication::translate("MainWindow", "Geschichte", nullptr));
        wunsch2->setItemText(9, QApplication::translate("MainWindow", "Informatik", nullptr));
        wunsch2->setItemText(10, QApplication::translate("MainWindow", "Kunst", nullptr));
        wunsch2->setItemText(11, QApplication::translate("MainWindow", "Mathe", nullptr));
        wunsch2->setItemText(12, QApplication::translate("MainWindow", "Musik", nullptr));
        wunsch2->setItemText(13, QApplication::translate("MainWindow", "Latein", nullptr));
        wunsch2->setItemText(14, QApplication::translate("MainWindow", "Philosophie", nullptr));
        wunsch2->setItemText(15, QApplication::translate("MainWindow", "Physik", nullptr));
        wunsch2->setItemText(16, QApplication::translate("MainWindow", "Religion", nullptr));
        wunsch2->setItemText(17, QApplication::translate("MainWindow", "Spanisch", nullptr));
        wunsch2->setItemText(18, QApplication::translate("MainWindow", "Sport", nullptr));
        wunsch2->setItemText(19, QApplication::translate("MainWindow", "WiPo", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_schueler), QApplication::translate("MainWindow", "Sch\303\274ler", nullptr));
        lbl_lehrkraft->setText(QApplication::translate("MainWindow", "Lehrkraft", nullptr));
        lehrerauswahl->setItemText(0, QApplication::translate("MainWindow", "Herr Lit", nullptr));
        lehrerauswahl->setItemText(1, QApplication::translate("MainWindow", "Frau Baum", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_lehrer), QApplication::translate("MainWindow", "Lehrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
