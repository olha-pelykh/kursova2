#include "AddBookDialog.h"
#include "ui_addbookdialog.h"

AddBookDialog::AddBookDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBookDialog)
{
    ui->setupUi(this);
}

AddBookDialog::~AddBookDialog()
{
    delete ui;
}

QString AddBookDialog::getBookName() const {
    return ui->nameLineEdit->text();
}

QString AddBookDialog::getAuthor() const {
    return ui->authorLineEdit->text();
}

int AddBookDialog::getYear() const {
    return ui->yearLineEdit->text().toInt();
}

void AddBookDialog::on_addButton_clicked()
{
    accept();
}

