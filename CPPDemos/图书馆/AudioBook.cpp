//
// Created by shaund on 2021/5/16.
//

#include "AudioBook.h"
#include <iostream>

using namespace std;

AudioBook::AudioBook(const string &title,
                     const string &auther,
                     const string &narator)
                     : Book(title, auther), _narator(narator) {
    cout << "AudioBook::AudioBook(" << _title << ", " << _auther << ", " << _narator << ")" << endl;
}

AudioBook::AudioBook(): Book() {
    cout << "AudioBook::AudioBook(); " << getMyClass() << endl;
}

AudioBook::~AudioBook() {
    cout << "AudioBook::~AudioBook()" << endl;
}

void AudioBook::print() const {
    cout << "AudioBook::print()" << endl;
}

std::string AudioBook::getMyClass() const {
    return "AudioBook";
}

const string & AudioBook::narator() const {
    return _narator;
}
