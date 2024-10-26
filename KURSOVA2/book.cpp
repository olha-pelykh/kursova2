#include "Book.h"

Book::Book(const QString &name, const QString &author, int year, int popularity, bool state)
    : name(name), author(author), year(year), popularity(popularity), state(state) {}

QString Book::getName() const { return name; }
QString Book::getAuthor() const { return author; }
int Book::getYear() const { return year; }
int Book::getPopularity() const { return popularity; }
bool Book::getState() const { return state; }

void Book::setPopularity(int newPopularity) {
    if (newPopularity >= 0) { // Optional: Ensure popularity is not negative
        popularity = newPopularity;
    }
}

void Book::setState(bool newState) {
    state = newState; // Update the internal state
}
