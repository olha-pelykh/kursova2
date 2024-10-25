/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *importButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *exportButton;
    QTableWidget *tableWidget;
    QPushButton *editBook;
    QPushButton *showButton;
    QPushButton *findButton;
    QPushButton *topButton;
    QPushButton *graphButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        importButton = new QPushButton(centralwidget);
        importButton->setObjectName("importButton");
        importButton->setGeometry(QRect(650, 40, 51, 20));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(40, 140, 61, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("comfortaa")});
        font.setPointSize(14);
        addButton->setFont(font);
        addButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-family: comfortaa;\n"
"\n"
""));
        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(30, 190, 80, 18));
        removeButton->setFont(font);
        removeButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-family: comfortaa;\n"
"\n"
""));
        exportButton = new QPushButton(centralwidget);
        exportButton->setObjectName("exportButton");
        exportButton->setGeometry(QRect(710, 40, 51, 20));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(130, 70, 651, 441));
        editBook = new QPushButton(centralwidget);
        editBook->setObjectName("editBook");
        editBook->setGeometry(QRect(30, 240, 80, 18));
        editBook->setFont(font);
        editBook->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-family: comfortaa;\n"
"\n"
""));
        showButton = new QPushButton(centralwidget);
        showButton->setObjectName("showButton");
        showButton->setGeometry(QRect(40, 90, 61, 20));
        showButton->setFont(font);
        showButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-family: comfortaa;\n"
"\n"
""));
        findButton = new QPushButton(centralwidget);
        findButton->setObjectName("findButton");
        findButton->setGeometry(QRect(30, 290, 80, 18));
        findButton->setFont(font);
        findButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-family: comfortaa;\n"
"\n"
""));
        topButton = new QPushButton(centralwidget);
        topButton->setObjectName("topButton");
        topButton->setGeometry(QRect(30, 340, 80, 18));
        topButton->setFont(font);
        topButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-family: comfortaa;\n"
"\n"
""));
        graphButton = new QPushButton(centralwidget);
        graphButton->setObjectName("graphButton");
        graphButton->setGeometry(QRect(30, 390, 80, 18));
        graphButton->setFont(font);
        graphButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-family: comfortaa;\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        importButton->setText(QCoreApplication::translate("MainWindow", "import", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "remove", nullptr));
        exportButton->setText(QCoreApplication::translate("MainWindow", "export", nullptr));
        editBook->setText(QCoreApplication::translate("MainWindow", "edit", nullptr));
        showButton->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        findButton->setText(QCoreApplication::translate("MainWindow", "find", nullptr));
        topButton->setText(QCoreApplication::translate("MainWindow", "top", nullptr));
        graphButton->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
