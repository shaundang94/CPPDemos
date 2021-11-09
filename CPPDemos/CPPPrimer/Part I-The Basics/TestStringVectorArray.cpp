//
// Created by shaund on 2021/10/25.
//

#include "TestStringVectorArray.h"
#include <string>
#include <iostream>
#include <vector>

void TestStringVectorArray::demo_string() {
    std::string s1 = "abc";
    std::cout << s1.length() << ", " << s1.size() << std::endl;



    int array1[] = {0,1,2};
    auto a1 = array1; // 类型是int *
    auto a2 = array1[0]; // int
    auto a3(array1); // int *
    auto a4(array1[0]); // int




    std::vector<std::string> vec1{"0", "1", "2"};
    std::vector<std::string> vec2{"0", "1", "2"};
    std::cout << ((vec1.begin() == vec1.begin()) ? "vec1.begin() == vec1.begin()" : "vec1.begin() != vec1.begin()") << std::endl;
    std::cout << ((vec1.begin() == vec2.begin()) ? "vec1.begin() == vec2.begin()" : "vec1.begin() != vec2.begin()") << std::endl;
}