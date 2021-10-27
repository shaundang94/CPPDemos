//
// Created by shaund on 2021/10/27.
//

#include "TestString.h"
#include <string>
#include <iostream>

void test_string_demo() {
//    std::string s1 = "abc" + "def"; ❌  字面值不能直接相加
    std::string s0 = "abc";
    std::string s1 = s0 + "def"; // ✅ string对象 + 字面值 = 另一个string对象
    std::cout << s1 << std::endl;
}