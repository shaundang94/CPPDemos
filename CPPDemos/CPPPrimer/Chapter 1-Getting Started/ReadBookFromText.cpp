//
// Created by shaund on 2021/9/15.
//

#include "ReadBookFromText.h"
#include <iostream>
#include "../include/Sales_item.h"

/**
 3671  g++ -std=c++11 ReadBookFromText.cpp
 3674  ./a.out <../data/book.txt> result.txt
 3675  ls
 3676  cat result.txt
 * */
int main() {
    Sales_item item;
    while (std::cin >> item) std::cout << item << std::endl;
    return 0;
}