cmake_minimum_required(VERSION 3.19)
project(CPPDemos)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPPDemos main.cpp
        "CPPPrimer/Chapter 1-Getting Started/InputOneBook.h"
        "CPPPrimer/Chapter 1-Getting Started/InputOneBook.cpp"
        "CPPPrimer/Chapter 1-Getting Started/EatchNumberInTheRange.h"
        "CPPPrimer/Chapter 1-Getting Started/EatchNumberInTheRange.cpp"
        "CPPPrimer/Part I-The Basics/TestConst.h"
        "CPPPrimer/Part I-The Basics/TestConst.cpp"
        "CPPPrimer/Part I-The Basics/TestStringVectorArray.cpp"
        "CPPPrimer/Part I-The Basics/TestStringVectorArray.h"
        "CPPPrimer/Part I-The Basics/TestString.cpp"
        "CPPPrimer/Part I-The Basics/TestString.h"
        "图书馆/TestBooks.h" "图书馆/TestBooks.cpp"
        "图书馆/AudioBook.h" "图书馆/AudioBook.cpp"
        "图书馆/Book.h" "图书馆/Book.cpp"
        "图书馆/LibMat.h" "图书馆/LibMat.cpp"
        )
