#include <iostream>
#include "二叉树/TestBinaryTree.h"
#include "CPPPrimer/Chapter 1-Getting Started/EatchNumberInTheRange.h"
#include "CPPPrimer/Chapter 1-Getting Started/InputOneBook.h"
#include "CPPPrimer/Part I-The Basics/TestConst.h"
void test_const_reference_demo();

int main() {
    // print_each_number_in_the_range();
    // input_one_book();
    // test_const_reference2();
    test_const_reference_demo();
    std::cout << "hello world" << std::endl;
    return 0;
}


void test_const_reference_demo() {
    int i = 512;
    const int ci = 1024;
    const int &rl = i;
    std::cout << "-dxf-testConstReference: i=" << i << "\n";
    std::cout << "-dxf-testConstReference: ci=" << ci << "\n";
    std::cout << "-dxf-testConstReference: rl=" << rl << "\n";
    std::cout << std::endl;
}