//
// Created by shaund on 2021/11/12.
//

#include "TestBooks.h"
#include "LibMat.h"
#include "Book.h"
#include "AudioBook.h"
#include <iostream>

void TestBooks::test_books_demo() {
    AudioBook *ab = new AudioBook();
    std::cout << ab->publishedDate << "; " << (*ab).publishedDate << std::endl;
    std::cout << ab->narator() << (*ab).narator() << std::endl;
}