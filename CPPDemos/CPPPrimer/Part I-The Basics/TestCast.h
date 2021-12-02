//
// Created by shaund on 2021/11/19.
//

#ifndef MAIN_CPP_TESTCAST_H
#define MAIN_CPP_TESTCAST_H


class TestCast {
public:
    static void testCast();
    void testParamsType(const int i1, int i2);
    void testParamsType2(int i0, const int *i1, const int * const i2);
    void testParamsArr(int (&arr2)[3], int* arr1[3]);
};


#endif //MAIN_CPP_TESTCAST_H
