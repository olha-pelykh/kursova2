#ifndef BOOK_H
#define BOOK_H

#include <QString>

class Book
{
public:
    Book(const QString &name, const QString &author, int year, int popularity, bool state);

    QString getName() const;
    QString getAuthor() const;
    int getYear() const;
    int getPopularity() const;
    bool getState() const;

    void setPopularity(int newPopularity);
    void setState(bool newState);

private:
    QString name;
    QString author;
    int year;
    int popularity;
    bool state;
};

#endif // BOOK_H
