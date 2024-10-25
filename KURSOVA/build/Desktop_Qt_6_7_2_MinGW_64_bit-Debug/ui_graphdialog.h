/********************************************************************************
** Form generated from reading UI file 'graphdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHDIALOG_H
#define UI_GRAPHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphDialog
{
public:
    QPushButton *drawGraph;

    void setupUi(QWidget *GraphDialog)
    {
        if (GraphDialog->objectName().isEmpty())
            GraphDialog->setObjectName("GraphDialog");
        GraphDialog->resize(538, 373);
        drawGraph = new QPushButton(GraphDialog);
        drawGraph->setObjectName("drawGraph");
        drawGraph->setGeometry(QRect(80, 80, 80, 18));

        retranslateUi(GraphDialog);

        QMetaObject::connectSlotsByName(GraphDialog);
    } // setupUi

    void retranslateUi(QWidget *GraphDialog)
    {
        GraphDialog->setWindowTitle(QCoreApplication::translate("GraphDialog", "Form", nullptr));
        drawGraph->setText(QCoreApplication::translate("GraphDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphDialog: public Ui_GraphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHDIALOG_H
