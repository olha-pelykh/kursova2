#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Book.h"
#include "editbookdialog.h"
#include <QMainWindow>
#include <QTableWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QFileDialog>
#include <QMessageBox>
#include <algorithm>
#include "topbookdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void populateTable(const QVector<Book>& books);
    void CocktailSort(QVector<int>& vec);
    void readBooksFromFile(const QString &filePath, QVector<Book> &books);
    void writeBooksToFile(const QString &filename, const QVector<Book> &books);
    void onHeaderClicked(int logicalIndex);
    QVector<Book> getBooksFromTable();
    QVector<Book> getBooksFromDataStructure();

public slots:
    void openFileDialog();

private slots:
    void onItemClicked(QTableWidgetItem* item);
    void on_addButton_clicked();
    void on_removeButton_clicked();
    void on_importButton_clicked();
    void on_editBook_clicked();
    void on_exportButton_clicked();
    void on_showButton_clicked();
    void on_findButton_clicked();
    void on_topButton_clicked();

    void on_graphButton_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Book> books;
    bool avaliable = true;
    bool yearSort = true;
};

#endif // MAINWINDOW_H
