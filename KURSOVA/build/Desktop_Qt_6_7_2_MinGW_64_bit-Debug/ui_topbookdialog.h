/********************************************************************************
** Form generated from reading UI file 'topbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPBOOKDIALOG_H
#define UI_TOPBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopBookDialog
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *statePageButton;
    QLabel *label;
    QLineEdit *yearTopEdit;
    QWidget *page_2;
    QPushButton *topButton2;
    QPushButton *yearPageButton;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QWidget *TopBookDialog)
    {
        if (TopBookDialog->objectName().isEmpty())
            TopBookDialog->setObjectName("TopBookDialog");
        TopBookDialog->resize(400, 300);
        stackedWidget = new QStackedWidget(TopBookDialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 381, 271));
        page = new QWidget();
        page->setObjectName("page");
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 180, 61, 18));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        font.setPointSize(11);
        pushButton->setFont(font);
        statePageButton = new QPushButton(page);
        statePageButton->setObjectName("statePageButton");
        statePageButton->setGeometry(QRect(259, 30, 111, 20));
        statePageButton->setFont(font);
        statePageButton->setLayoutDirection(Qt::LeftToRight);
        statePageButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 90, 201, 31));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        yearTopEdit = new QLineEdit(page);
        yearTopEdit->setObjectName("yearTopEdit");
        yearTopEdit->setGeometry(QRect(130, 130, 113, 20));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        topButton2 = new QPushButton(page_2);
        topButton2->setObjectName("topButton2");
        topButton2->setGeometry(QRect(160, 180, 61, 18));
        topButton2->setFont(font);
        yearPageButton = new QPushButton(page_2);
        yearPageButton->setObjectName("yearPageButton");
        yearPageButton->setGeometry(QRect(239, 30, 121, 20));
        yearPageButton->setFont(font);
        yearPageButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 90, 311, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(page_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(130, 130, 111, 22));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comfortaa")});
        font1.setPointSize(10);
        comboBox->setFont(font1);
        stackedWidget->addWidget(page_2);

        retranslateUi(TopBookDialog);

        QMetaObject::connectSlotsByName(TopBookDialog);
    } // setupUi

    void retranslateUi(QWidget *TopBookDialog)
    {
        TopBookDialog->setWindowTitle(QCoreApplication::translate("TopBookDialog", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("TopBookDialog", "top", nullptr));
        statePageButton->setText(QCoreApplication::translate("TopBookDialog", "top by state", nullptr));
        label->setText(QCoreApplication::translate("TopBookDialog", "Enter the year for which you\n"
" want to get the top 10 books:", nullptr));
        topButton2->setText(QCoreApplication::translate("TopBookDialog", "top", nullptr));
        yearPageButton->setText(QCoreApplication::translate("TopBookDialog", "top by year", nullptr));
        label_2->setText(QCoreApplication::translate("TopBookDialog", "Chose the state what you\n"
"wanted to top 10-books:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TopBookDialog", "Avaliable", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TopBookDialog", "Checked out", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TopBookDialog: public Ui_TopBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPBOOKDIALOG_H
