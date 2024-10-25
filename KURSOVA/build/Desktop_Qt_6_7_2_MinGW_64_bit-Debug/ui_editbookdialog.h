/********************************************************************************
** Form generated from reading UI file 'editbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBOOKDIALOG_H
#define UI_EDITBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditBookDialog
{
public:
    QLineEdit *titleLineEdit;
    QLineEdit *authorLineEdit;
    QLineEdit *yearLineEdit;
    QPushButton *saveButton;
    QComboBox *stateComboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;

    void setupUi(QWidget *EditBookDialog)
    {
        if (EditBookDialog->objectName().isEmpty())
            EditBookDialog->setObjectName("EditBookDialog");
        EditBookDialog->resize(400, 300);
        titleLineEdit = new QLineEdit(EditBookDialog);
        titleLineEdit->setObjectName("titleLineEdit");
        titleLineEdit->setGeometry(QRect(110, 78, 151, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        font.setPointSize(10);
        titleLineEdit->setFont(font);
        authorLineEdit = new QLineEdit(EditBookDialog);
        authorLineEdit->setObjectName("authorLineEdit");
        authorLineEdit->setGeometry(QRect(110, 118, 151, 20));
        authorLineEdit->setFont(font);
        yearLineEdit = new QLineEdit(EditBookDialog);
        yearLineEdit->setObjectName("yearLineEdit");
        yearLineEdit->setGeometry(QRect(110, 158, 151, 20));
        yearLineEdit->setFont(font);
        saveButton = new QPushButton(EditBookDialog);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(160, 220, 51, 18));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comfortaa")});
        font1.setPointSize(12);
        saveButton->setFont(font1);
        stateComboBox = new QComboBox(EditBookDialog);
        stateComboBox->addItem(QString());
        stateComboBox->addItem(QString());
        stateComboBox->setObjectName("stateComboBox");
        stateComboBox->setGeometry(QRect(110, 190, 151, 20));
        stateComboBox->setFont(font);
        label_2 = new QLabel(EditBookDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 70, 61, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comfortaa")});
        font2.setPointSize(8);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_3 = new QLabel(EditBookDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 110, 61, 16));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_4 = new QLabel(EditBookDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 150, 61, 16));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label = new QLabel(EditBookDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 41, 91, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Comfortaa")});
        font3.setPointSize(14);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(EditBookDialog);

        QMetaObject::connectSlotsByName(EditBookDialog);
    } // setupUi

    void retranslateUi(QWidget *EditBookDialog)
    {
        EditBookDialog->setWindowTitle(QCoreApplication::translate("EditBookDialog", "Form", nullptr));
        saveButton->setText(QCoreApplication::translate("EditBookDialog", "save", nullptr));
        stateComboBox->setItemText(0, QCoreApplication::translate("EditBookDialog", "Avaliable", nullptr));
        stateComboBox->setItemText(1, QCoreApplication::translate("EditBookDialog", "Cheked Out", nullptr));

        label_2->setText(QCoreApplication::translate("EditBookDialog", "title", nullptr));
        label_3->setText(QCoreApplication::translate("EditBookDialog", "author", nullptr));
        label_4->setText(QCoreApplication::translate("EditBookDialog", "year", nullptr));
        label->setText(QCoreApplication::translate("EditBookDialog", "Book Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditBookDialog: public Ui_EditBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBOOKDIALOG_H
