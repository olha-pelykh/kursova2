#include "EditBookDialog.h"
#include "ui_EditBookDialog.h"

EditBookDialog::EditBookDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditBookDialog),
    booksPtr(nullptr),
    currentIndex(-1)
{
    ui->setupUi(this);
}

EditBookDialog::~EditBookDialog() {
    delete ui;
}

void EditBookDialog::setBooks(QVector<Book>* books) {
    booksPtr = books;
}

void EditBookDialog::setBook(const Book& book, int index) {
    currentIndex = index;

    Book mutableBook = book;
    ui->titleLineEdit->setText(mutableBook.getName());
    ui->authorLineEdit->setText(mutableBook.getAuthor());
    ui->yearLineEdit->setText(QString::number(mutableBook.getYear()));
    ui->stateComboBox->setCurrentIndex(mutableBook.getState() ? 0 : 1);
}

Book EditBookDialog::getBook() const {
    QString title = ui->titleLineEdit->text();
    QString author = ui->authorLineEdit->text();
    int year = ui->yearLineEdit->text().toInt();
    bool state = (ui->stateComboBox->currentIndex() == 0);

    int popularity = 0;

    Book currentBook = (*booksPtr)[currentIndex];
    popularity = currentBook.getPopularity();

    if (currentBook.getState() == true && state == false) {
        popularity++;
    }

    return Book(title, author, year, popularity, state);
}

void EditBookDialog::accept() {
    if (booksPtr && currentIndex >= 0) {
        Book updatedBook = getBook();
        (*booksPtr)[currentIndex] = updatedBook;
    }
    QDialog::accept();
}

void EditBookDialog::on_saveButton_clicked()
{
    accept();
}
