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
    double dval = 996.2;
    const int ci_d = dval; // 常量变量 + 类型不匹配 => 创建中间变量
    const int &cir_d = dval;
    dval = 8;
    std::cout << "dval=" << dval << "; ci_d=" << ci_d << "; cir_d=" << cir_d << std::endl;

    int ival = 996;
    const int ci_i = ival;
    const int &cir_i = ival;
    ival = 8;
    std::cout << "ival=" << ival << "; ci_i=" << ci_i << "; cir_i=" << cir_i << std::endl;
}