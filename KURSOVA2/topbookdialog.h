#ifndef TOPBOOKDIALOG_H
#define TOPBOOKDIALOG_H

#include "Book.h"
#include <QDialog>
#include <QMessageBox>
#include "mainwindow.h"
#include <algorithm>

namespace Ui {
class TopBookDialog;
}

class TopBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TopBookDialog(const QVector<Book>& books, QWidget *parent = nullptr);
    ~TopBookDialog();

signals:
    void booksFiltered(const QVector<Book>& books);

private slots:

    void on_pushButton_clicked();

    void on_statePageButton_clicked();

    void on_yearPageButton_clicked();

    void on_topButton2_clicked();

private:
    Ui::TopBookDialog *ui;
    QVector<Book> books;
    QVector<Book> filteredBooks;
};

#endif // TOPBOOKDIALOG_H
