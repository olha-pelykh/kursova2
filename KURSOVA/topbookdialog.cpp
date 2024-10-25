#include "topbookdialog.h"
#include "book.h"
#include "ui_topbookdialog.h"

TopBookDialog::TopBookDialog(const QVector<Book>& books, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TopBookDialog)
    , books(books)
{
    ui->setupUi(this);
}

TopBookDialog::~TopBookDialog()
{
    delete ui;
}

void TopBookDialog::on_pushButton_clicked()
{
    bool ok;
    int year = ui->yearTopEdit->text().toInt(&ok);

    if (!ok) {
        QMessageBox::warning(this, "Input Error", "Please enter a valid year.");
        return;
    }

    filteredBooks.clear();

    for (const Book& book : books) {
        if (book.getYear() == year) {
            filteredBooks.append(book);
        }
    }

    std::sort(filteredBooks.begin(), filteredBooks.end(), [](const Book& a, const Book& b) {
        return a.getPopularity() > b.getPopularity();
    });

    if (filteredBooks.size() > 10) {
        filteredBooks = filteredBooks.mid(0, 10);
    }

    emit booksFiltered(filteredBooks);
    accept();
}

void TopBookDialog::on_statePageButton_clicked()
{
    int pageIndex = 1;
    ui->stackedWidget->setCurrentIndex(pageIndex);
}

void TopBookDialog::on_yearPageButton_clicked()
{
    int pageIndex = 0;
    ui->stackedWidget->setCurrentIndex(pageIndex);
}


void TopBookDialog::on_topButton2_clicked()
{
    int selectedIndex = ui->comboBox->currentIndex();

    filteredBooks.clear();

    switch (selectedIndex) {
    case 0:
        for (const Book& book : books) {
            if (book.getState() == 1 ) {
                filteredBooks.append(book);
            }
        }
        break;
    case 1:
        for (const Book& book : books) {
            if (book.getState() == 0 ) {
                filteredBooks.append(book);
            }
        }
        break;
    default:
        return;
    }

    std::sort(filteredBooks.begin(), filteredBooks.end(), [](const Book& a, const Book& b) {
        return a.getPopularity() > b.getPopularity();
    });

    if (filteredBooks.size() > 10) {
        filteredBooks = filteredBooks.mid(0, 10);
    }

    emit booksFiltered(filteredBooks);
    accept();
}

