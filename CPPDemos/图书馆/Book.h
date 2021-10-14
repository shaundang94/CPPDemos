//
// Created by shaund on 2021/5/16.
//

#ifndef MAIN_CPP_BOOK_H
#define MAIN_CPP_BOOK_H
#include "LibMat.h"
#include <string>

using namespace std;

class Book: public LibMat {
public:
    Book();
    Book(const string &title, const string &auther);
    virtual ~Book();

    virtual void print() const;
    virtual std::string getMyClass() const;

    const string& title() const;
    const string& auther() const;

protected:
    string _title;
    string _auther;
};


#endif //MAIN_CPP_BOOK_H
