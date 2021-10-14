//
//  BinaryTree.cpp
//  EssentialCPPDemo
//
//  Created by shaund on 2021/7/26.
//

#include "BinaryTree.hpp"
#include "BTnode.hpp"

template <typename elemType> inline BinaryTree<elemType>::BinaryTree(): _root(0) {
    std::cout << typeid(this) << std::endl;
}

template <typename elemType> BinaryTree<elemType>::~BinaryTree() {
    clear();
}

template <typename elemType> inline BinaryTree<elemType>::BinaryTree(const BinaryTree& rhs) { //“BinaryTree”第一次写的时候限定elemType就行了，返回类型除外，如楼下
    copy(_root, rhs);
}

template <typename elemType> inline BinaryTree<elemType>& BinaryTree<elemType>::operator=(const BinaryTree& rhs) {
    if (this != rhs) {
        clear();
        copy(this, rhs);
    }
    return this;
}

template <typename elemType> void BinaryTree<elemType>::insert(const elemType &elem) {
    if (_root == nullptr) {
        _root = new BTnode<elemType>(elem);
    } else {
        _root->insert_value(elem);
    }
}

template<typename elemType> void BinaryTree<elemType>::remove(const elemType &elem) {
    if (_root) {
        if (_root->_val == elem) {
            remove_root(); // 根节点移除特例处理
        } else {
            _root->remove_value(elem, _root);
        }
    }
}

template<typename elemType> void BinaryTree<elemType>::remove_root() {
    if (!_root) {
        return;
    }
    BTnode<elemType> *tmp = _root;
    if (_root->_rchild) {
        _root = _root->_rchild;
        // 将左子节点搬移到右子节点的左子树底部
        if (tmp->_lchild) {
            BTnode<elemType> *lc = tmp->_lchild;
            BTnode<elemType> *newlc = _root->_lchild;
            if (!newlc) {
                // 没有任何子树，直接接上
                _root->_lchild = lc;
            } else {
                BTnode<elemType>::lchild_leaf(lc, newlc);
            }
        }
    } else {
        _root = _root->_lchild;
    }
    delete tmp;
}
