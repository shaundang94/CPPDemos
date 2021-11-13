//
// Created by shaund on 2021/5/16.
//

#ifndef MAIN_CPP_AUDIOBOOK_H
#define MAIN_CPP_AUDIOBOOK_H
#include "Book.h"

class AudioBook: public Book {
public:
    AudioBook(const string &title,
              const string &auther, const string &narator);
    AudioBook();
    ~AudioBook();

    virtual void print() const;
    virtual std::string getMyClass() const;

    const string& narator() const;

    string publishedDate{"2021年11月12日12:57:48"};
protected:
    string _narator; //演播者
};


#endif //MAIN_CPP_AUDIOBOOK_H
