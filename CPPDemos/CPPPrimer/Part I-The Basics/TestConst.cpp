//
// Created by shaund on 2021/9/29.
//

#include "TestConst.h"

void test_const_reference_demo2() {

    double dval = 996.2;
    double dval2 = dval; // 变量 => 创建新对象
    double dval3 = 007.2;
    double *double_ptr = &dval; // 指针 => 存的值是dval的地址
    const int const_int = dval; // 常量变量 => 创建新对象
    const int &const_int_refe = dval; // 常量引用 + 类型不匹配 => 创建新对象
    //const int *const_int_ptr = &dval; // ❌编译错误：Cannot initialize a variable of type 'const int *' with an rvalue of type 'double *'
    const double const_double = dval; // 常量变量 => 创建新对象
    const double &const_double_refe = dval; // 常量引用 + 类型匹配 => 绑的就是你
    const double *const_double_ptr = &dval; // 常量指针 => 存的值是dval的地址。所指对象内容不能变，但指针本身的内容还可以变
    const double * const const_double_ptr_const = &dval; // 常量指针常量 => 所指对象内容不能变(第一个const)，指针本身的内容也不能变(第二个const约束住了)
    dval = 8.03; // change value

    printf("dval=%f<%p>; double_ptr=%p<%p> \n", dval, &dval, double_ptr, &double_ptr);
    printf("const_int=%d<%p>; const_int_refe=%d<%p> \n", const_int, &const_int, const_int_refe, &const_int_refe);
    printf("const_double=%f<%p>; const_double_refe=%f<%p>; const_double_ptr=%p<%p> \n", const_double, &const_double, const_double_refe, &const_double_refe, const_double_ptr, &const_double_ptr);
    /*
    dval=8.030000<0x7ffeeb1e6958>; double_ptr=0x7ffeeb1e6958<0x7ffeeb1e6950>
    const_int=996<0x7ffeeb1e694c>; const_int_refe=996<0x7ffeeb1e693c>
    const_double=996.200000<0x7ffeeb1e6930>; const_double_refe=8.030000<0x7ffeeb1e6958>; const_double_ptr=0x7ffeeb1e6958<0x7ffeeb1e6920>
     * */


    //const_int = 1; // ❌
    //int i = 1;
    //const_int_refe = &i; // ❌
    //const_double = 2.0; // ❌
    //const double j = 3.0;
    //const_double_refe = &j; // ❌
    const_double_ptr = &dval3; // ✅
    //const_double_ptr_const = &dval3;
    //*const_double_ptr = 007; // ❌

}

void test_const_demo3() {
    int i = 0;
    int * const p1 = &i;
    const int ci = 42;
    const int *p2 = &ci;
    const int * const p3 = p2;
    const int &r = ci;
//    int *p = p3;

    typedef char *pstring; // char* 指针
    const pstring cstr = 0; // const 修饰的是指针，所以cstr是指向char的常量指针，等价于楼下
    char * const same_to_cstr = cstr;
    const pstring  *ps; // ps是个指针，所指对象时「指向char的常量指针」，等价于楼下
    char * const *same_to_ps = &cstr;

    auto i;
}