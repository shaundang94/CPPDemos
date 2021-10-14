//
// Created by shaund on 2021/5/16.
//

#include "Book.h"
#include <iostream>

Book::Book(const string &title, const string &auther): _title(title), _auther(auther) {
    cout << "Book::Book(" << _title << ", " << _auther << ")" << endl;
}

Book::Book(): LibMat() {

}

Book::~Book() {
    cout << "Book::~Book()" << endl;
}

void Book::print() const {
    cout << "Book::printLM() const" << endl;
}

std::string Book::getMyClass() const {
    return "Book";
}

const string & Book::title() const {
    return _title;
}

const string & Book::auther() const {
    return _auther;
}