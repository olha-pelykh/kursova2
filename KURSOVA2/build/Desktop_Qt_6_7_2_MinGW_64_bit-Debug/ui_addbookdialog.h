/********************************************************************************
** Form generated from reading UI file 'addbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKDIALOG_H
#define UI_ADDBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBookDialog
{
public:
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLineEdit *authorLineEdit;
    QLineEdit *yearLineEdit;
    QPushButton *addButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *AddBookDialog)
    {
        if (AddBookDialog->objectName().isEmpty())
            AddBookDialog->setObjectName("AddBookDialog");
        AddBookDialog->resize(400, 300);
        label = new QLabel(AddBookDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 50, 131, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        nameLineEdit = new QLineEdit(AddBookDialog);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(110, 90, 131, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comfortaa")});
        font1.setPointSize(12);
        nameLineEdit->setFont(font1);
        authorLineEdit = new QLineEdit(AddBookDialog);
        authorLineEdit->setObjectName("authorLineEdit");
        authorLineEdit->setGeometry(QRect(110, 130, 131, 20));
        authorLineEdit->setFont(font1);
        yearLineEdit = new QLineEdit(AddBookDialog);
        yearLineEdit->setObjectName("yearLineEdit");
        yearLineEdit->setGeometry(QRect(110, 170, 131, 20));
        yearLineEdit->setFont(font1);
        addButton = new QPushButton(AddBookDialog);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(140, 200, 80, 18));
        addButton->setFont(font1);
        label_2 = new QLabel(AddBookDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 80, 51, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comfortaa")});
        font2.setPointSize(9);
        label_2->setFont(font2);
        label_3 = new QLabel(AddBookDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 120, 51, 16));
        label_3->setFont(font2);
        label_4 = new QLabel(AddBookDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 160, 51, 16));
        label_4->setFont(font2);
        label_5 = new QLabel(AddBookDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 140, 51, 16));
        label_5->setFont(font2);

        retranslateUi(AddBookDialog);

        QMetaObject::connectSlotsByName(AddBookDialog);
    } // setupUi

    void retranslateUi(QWidget *AddBookDialog)
    {
        AddBookDialog->setWindowTitle(QCoreApplication::translate("AddBookDialog", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddBookDialog", "Book Info", nullptr));
        addButton->setText(QCoreApplication::translate("AddBookDialog", "add", nullptr));
        label_2->setText(QCoreApplication::translate("AddBookDialog", "title", nullptr));
        label_3->setText(QCoreApplication::translate("AddBookDialog", "author", nullptr));
        label_4->setText(QCoreApplication::translate("AddBookDialog", "year", nullptr));
        label_5->setText(QCoreApplication::translate("AddBookDialog", "title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBookDialog: public Ui_AddBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKDIALOG_H
