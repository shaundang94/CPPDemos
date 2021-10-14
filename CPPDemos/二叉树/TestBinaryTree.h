//
// Created by shaund on 2021/9/1.
//

#ifndef CPPLANGUAGEBASEDEMO_TESTBINARYTREE_H
#define CPPLANGUAGEBASEDEMO_TESTBINARYTREE_H
#include "BinaryTree.hpp"
#include "BTnode.hpp"

class TestBinaryTree {
public:
    static void testBinaryTree() {
        BinaryTree<int> *intTree;
        BTnode<int> *intNode = new BTnode<int>(5);
    };
};


#endif //CPPLANGUAGEBASEDEMO_TESTBINARYTREE_H
