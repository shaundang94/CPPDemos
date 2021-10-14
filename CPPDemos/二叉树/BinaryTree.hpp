//
//  BinaryTree.hpp
//  EssentialCPPDemo
//
//  Created by shaund on 2021/7/26.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>
#include <iostream>

template <typename valType>
class BTnode; //前置声明


template <typename elemType>
class BinaryTree {
private:
    BTnode<elemType> *_root; //注意：这里就不能写成“BTnode<valType> *_root;”，“elemType”被称为template param list，用来限定BTnode对应关系的，这是C++规则。如BTnode<string> 不能和BinaryTree<int>扯上关系，只能和BinaryTree<string>对应，硬要配对的话，只能调整elemType所表类型。
    void copy(BTnode<elemType>* tar, BTnode<elemType>* scr);
    void remove_root();

public:
    BinaryTree(); //constructor
    ~BinaryTree(); //destructor
    BinaryTree(const BinaryTree& rhs); //copy constructor
    BinaryTree& operator=(const BinaryTree& rhs); //copy assignment operator
    
    bool empty() { return _root == nullptr; };
    void clear() {};
    void test01(elemType root) {};
    void insert(const elemType &elem);
    void remove(const elemType &elem);
};


///* test */
//class TestClsA {};
//class TestClsB {};
//class TestClsAB : public TestClsA, public TestClsB {};
//void testTemplate01() {
//    BinaryTree<TestClsA> si;
//    si.test01(TestClsAB());
//    si.test01(TestClsA());
//}

#endif /* BinaryTree_hpp */
