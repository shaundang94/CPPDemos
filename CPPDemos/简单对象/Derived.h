//
// Created by shaund on 2021/5/16.
//

#ifndef MAIN_CPP_DERIVED_H
#define MAIN_CPP_DERIVED_H
#include <iostream>

using namespace std;

class Base
{
public:
    virtual void f(float x){ cout << "Base::f(float) " << x << endl; }
    virtual void g(float x){ cout << "Base::g(float) " << x << endl; }
    void h(float x){ cout << "Base::h(float) " << x << endl; }

    void overload1() {} // overload
    void overload2(int a) {}
    void overload3(float b) {}
};

class Derived : public Base
{
public:
    virtual void f(float x){ cout << "Derived::f(float) " << x << endl; } //虚函数+同名+同参数 → override 覆盖父类函数 → 可使用类限定符
    virtual void g(int x){ cout << "Derived::g(int) " << x << endl; } //虚函数+同名+非同参数 → overwrite → 根据pointer/reference 调用对应函数
    void h(float x){ cout << "Derived::h(float) " << x << endl; } //非虚函数+同名+同参数 → overwrite → 根据pointer/reference 调用对应函数
};


#endif //MAIN_CPP_DERIVED_H
