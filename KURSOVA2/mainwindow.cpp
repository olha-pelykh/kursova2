#include "mainwindow.h"
#include "EditBookDialog.h"
#include "addbookdialog.h"
#include "qboxlayout.h"
#include "ui_EditBookDialog.h"
#include "ui_mainwindow.h"
#include "topbookdialog.h"
#include "ui_topbookdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->tableWidget->horizontalHeader(), &QHeaderView::sectionClicked, this, &MainWindow::onHeaderClicked);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnCount(4);
    QStringList headers;
    headers << "Title" << "Author" << "Year" << "State";
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setStyleSheet("QTableWidget {"
                                   "font-size: 14px;"
                                   "font-family: Comfortaa; "
                                   "}");

    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {"
                                                       "color: white;"
                                                       "font-size: 16px;"
                                                       "font-family: Comfortaa;"
                                                       "font-weight: bold;"
                                                       "padding: 4px;"
                                                       "}");


    ui->tableWidget->verticalHeader()->setStyleSheet("QHeaderView::section {"
                                                     "color: white;"
                                                     "font-size: 16px;"
                                                     "font-family: Comfortaa;"
                                                     "font-weight: bold;"
                                                     "padding: 4px;"
                                                     "}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openFileDialog() {
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Select a File",
                                                    "",
                                                    "Text Files (*.txt);;All Files (*)");
    if (!fileName.isEmpty()) {
        QMessageBox::information(this, "File Selected", "File: " + fileName);
    } else {
        QMessageBox::information(this, "No File Selected", "No file was selected.");
    }
}

void MainWindow::readBooksFromFile(const QString &filename, QVector<Book> &books) {
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(',');

            if (parts.size() == 5) {
                QString name = parts[0];
                QString author = parts[1];
                int year = parts[2].toInt();
                int popularity = parts[3].toInt();
                bool state = (parts[4].toInt() == 1);

                Book book(name, author, year, popularity, state);
                books.append(book);
            }
        }
        file.close();
    } else {
        QTextStream(stdout) << "Could not open file: " << filename << '\n';
    }
}

void MainWindow::writeBooksToFile(const QString &filename, const QVector<Book> &books) {
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const Book &book : books) {
            // Write book details in CSV format
            out << book.getName() << ','
                << book.getAuthor() << ','
                << book.getYear() << ','
                << book.getPopularity() << ','
                << (book.getState() ? "1" : "0") << '\n';
        }
        file.close();
    } else {
        QTextStream(stdout) << "Could not open file: " << filename << '\n';
    }
}

void MainWindow::populateTable(const QVector<Book>& books) {

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(books.size());

    for (int row = 0; row < books.size(); ++row) {
        const Book& book = books[row];

        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(book.getName()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(book.getAuthor()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(book.getYear())));

        QString stateStr = book.getState() ? "Available" : "Checked Out";
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(stateStr));
    }

    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

void MainWindow::on_addButton_clicked()
{
    AddBookDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString name = dialog.getBookName();
        QString author = dialog.getAuthor();
        int year = dialog.getYear();
        bool state = true;

        books.append(Book(name, author, year, 0, state));
        populateTable(books);

    }
}

void MainWindow::on_removeButton_clicked() {
    int row = ui->tableWidget->currentRow();

    if (row != -1) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Remove Book", "Are you sure you want to remove this book?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            books.removeAt(row);
            ui->tableWidget->removeRow(row);
            populateTable(books);
        }
    } else {
        QMessageBox::warning(this, "No Selection", "Please select a row to remove.");
    }
}

void ShakerSort(QVector<Book>& books) {
    bool swapped = true;
    int start = 0;
    int end = books.size() - 1;

    while (swapped) {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (books[i].getYear() > books[i + 1].getYear()) {
                std::swap(books[i], books[i + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;

        swapped = false;

        --end;

        for (int i = end - 1; i >= start; --i) {
            if (books[i].getYear() > books[i + 1].getYear()) {
                std::swap(books[i], books[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
}

void MainWindow::on_importButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Choose a file", "", "Text Files (*.txt);;All Files (*)");

    if (!filePath.isEmpty()) {
        readBooksFromFile(filePath, books);
        populateTable(books);
    }
}

void MainWindow::onHeaderClicked(int logicalIndex) {
    if (logicalIndex == 2) {
        yearSort = !yearSort;
        if(yearSort){
            QVector<Book> tempBooks = books;
            ShakerSort(tempBooks);
            populateTable(tempBooks);

        }
        else if (!yearSort){
            QVector<Book> tempBooks = books;
            ShakerSort(tempBooks);
            std::reverse(tempBooks.begin(), tempBooks.end());
            populateTable(tempBooks);
        }
    }
    if(logicalIndex == 3){
        avaliable = !avaliable;
        if(avaliable){
            QVector<Book> availableBooks;
            for (const Book& book : books) {
                if (book.getState()) {
                    availableBooks.append(book);
                    populateTable(availableBooks);
                }
            }
        }
        else if (!avaliable){
            QVector<Book> unavailableBooks;
            for (const Book& book : books) {
                if (!book.getState()) {
                    unavailableBooks.append(book);
                    populateTable(unavailableBooks);
                }
            }
        }
    }

}

void MainWindow::onItemClicked(QTableWidgetItem *item) {
    int row = item->row();

    if (row >= 0 && row < books.size()) {
        Book book = books[row];

        EditBookDialog dialog(this);
        dialog.setBooks(&books);
        dialog.setBook(book, row);

        if (dialog.exec() == QDialog::Accepted) {
            populateTable(getBooksFromDataStructure());
        }
    }
}

QVector<Book> MainWindow::getBooksFromDataStructure() {
    return books;
}

QVector<Book> MainWindow::getBooksFromTable() {

    QVector<Book> books;

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QString title = ui->tableWidget->item(row, 0)->text();
        QString author = ui->tableWidget->item(row, 1)->text();
        int year = ui->tableWidget->item(row, 2)->text().toInt();
        bool state = (ui->tableWidget->item(row, 3)->text() == "Available");

        books.append(Book(title, author, year, 0, state));
    }

    return books;
}

void MainWindow::on_editBook_clicked()
{
    int row = ui->tableWidget->currentRow();

    if (books.isEmpty()) {
        QMessageBox::warning(this, "No books", "The book list is empty.");
        return;
    }

    if (row >= 0 && row < books.size()) {
        Book book = books[row];

        EditBookDialog dialog(this);
        dialog.setBooks(&books);
        dialog.setBook(book, row);

        if (dialog.exec() == QDialog::Accepted) {
            populateTable(getBooksFromDataStructure());
        }
    } else {
        QMessageBox::warning(this, "No selection", "Please select a book to edit.");
    }
}

void MainWindow::on_exportButton_clicked()
{
    if (books.isEmpty()) {
        QMessageBox::warning(this, "No books", "The book list is empty.");
        return;
    }

    QString filePath = QFileDialog::getSaveFileName(this, "Save File", "", "Text Files (*.txt);;All Files (*)");

    if (!filePath.isEmpty()) {
        writeBooksToFile(filePath, books);
        QMessageBox::information(this, "Success", "Books have been exported successfully.");
    }

}

void MainWindow::on_showButton_clicked()
{
    if (books.isEmpty()) {
        QMessageBox::warning(this, "No books", "The book list is empty.");
        return;
    }
    populateTable(books);
}


void MainWindow::on_findButton_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Find Author");
\
    QVBoxLayout *layout = new QVBoxLayout(dialog);

    QLabel *label = new QLabel("Enter Author Name:");
    QLineEdit *lineEdit = new QLineEdit();
    layout->addWidget(label);
    layout->addWidget(lineEdit);

    QPushButton *findButton = new QPushButton("find");
    layout->addWidget(findButton);

    connect(findButton, &QPushButton::clicked, [dialog, lineEdit, this]() {
        QString inputText = lineEdit->text();
        QVector<Book> authorBooks;

        for (const Book& book : books) {
            if (book.getAuthor() == inputText) {
                authorBooks.append(book);
            }
        }

        if(authorBooks.size() == 0){
            QMessageBox::warning(this, "Eror", "No books with this author.");
            dialog->accept();
        }
        else{
        populateTable(authorBooks);
        dialog->accept();
        }
    });

    dialog->exec();
}

void MainWindow::on_topButton_clicked()
{
    TopBookDialog *topBookDialog = new TopBookDialog(books, this);
    connect(topBookDialog, &TopBookDialog::booksFiltered, this, &MainWindow::populateTable);
    topBookDialog->exec();
}

void MainWindow::on_graphButton_clicked()
{
    // GraphDialog *dialog = new GraphDialog(books, this);
    // dialog->exec();
}

