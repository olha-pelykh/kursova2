#ifndef EDITBOOKDIALOG_H
#define EDITBOOKDIALOG_H

#include <QDialog>
#include <QVector>
#include "Book.h"

namespace Ui {
class EditBookDialog;
}

class EditBookDialog : public QDialog {
    Q_OBJECT

public:
    explicit EditBookDialog(QWidget *parent = nullptr);
    ~EditBookDialog();

    void setBook(const Book& book, int index);
    void setBooks(QVector<Book>* books);
    Book getBook() const;
    void accept() override;

private slots:
    void on_saveButton_clicked();

private:
    Ui::EditBookDialog *ui;
    QVector<Book>* booksPtr;
    int currentIndex;
};

#endif // EDITBOOKDIALOG_H
