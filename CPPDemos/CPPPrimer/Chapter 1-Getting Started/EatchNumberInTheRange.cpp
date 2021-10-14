//
// Created by shaund on 2021/9/10.
//

#include "EatchNumberInTheRange.h"

void print_each_number_in_the_range() {
    std::cout << "enter two integers:" << std::endl;
    int begin, end;
    std::cin >> begin >> end;

    if (begin > end) {
        int temp = begin;
        begin = end;
        end = temp;
    }

    while (begin <= end) {
        std::cout << begin << " ";
        //begin++;
        ++begin;
    }
    std::cout << std::endl;
}