//
//  BTnode.hpp
//  EssentialCPPDemo
//
//  Created by shaund on 2021/7/26.
//

#ifndef BTnode_hpp
#define BTnode_hpp
#include <stdio.h>

///* 前置声明 */
//template <typename valType>
//class BTnode;

template <typename elemType>
class BinaryTree; //前置声明【BinaryTree class template】，意思：名称叫“BinaryTree”的一个类模板


/* valType（类型参数，type parameter）被拿来当做占位符，用户为它指定特定类型前，它都被视为可被替代的任意类型 */
template <typename valType>
class BTnode {
    friend class BinaryTree<valType>; //让【BinaryTree(类模板)】成为【BTnode(类模板)】的每一种类型的友元
public:
    BTnode(const valType& val);
    void insert_value(const valType& val);
    static void lchild_leaf(BTnode *leaf, BTnode *subtree);

private:
    valType _val; //节点实值
    int _cnt; //节点实值的重复次数
    BTnode *_lchild; //左子节点
    BTnode *_rchild; //右子节点
};

#endif /* BTnode_hpp */
