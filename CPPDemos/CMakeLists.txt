cmake_minimum_required(VERSION 3.19)
project(CPPDemos)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPPDemos main.cpp
        "CPPPrimer/Chapter 1-Getting Started/InputOneBook.h"
        "CPPPrimer/Chapter 1-Getting Started/InputOneBook.cpp"
        "CPPPrimer/Chapter 1-Getting Started/EatchNumberInTheRange.h"
        "CPPPrimer/Chapter 1-Getting Started/EatchNumberInTheRange.cpp"
        "CPPPrimer/Part I-The Basics/TestConst.h"
        "CPPPrimer/Part I-The Basics/TestConst.cpp" "CPPPrimer/Part I-The Basics/TestStringVectorArray.cpp" "CPPPrimer/Part I-The Basics/TestStringVectorArray.h"
        "CPPPrimer/Part I-The Basics/TestConst.cpp" "CPPPrimer/Part I-The Basics/TestString.cpp" "CPPPrimer/Part I-The Basics/TestString.h")
