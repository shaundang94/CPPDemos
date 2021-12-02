//
// Created by shaund on 2021/11/19.
//

#include "TestCast.h"
#include <iostream>


void TestCast::testCast() {
    int i = 12;
    const int *p = &i;
    int *pp = const_cast<int *>(p);
    std::cout << *pp << std::endl;
}

void TestCast::testParamsType(const int i1, int i2) {
    std::cout << i1 << "; " << i2 << std::endl;
}

void TestCast::testParamsType2(int i0, const int *i1, const int *const i2) {
    std::cout << i0 << "; " << i1 << "; " << i2<< std::endl;
}

void TestCast::testParamsArr(int (&arr2)[3], int* arr1[3]) {

}





