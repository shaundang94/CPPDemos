//
//  BTnode.cpp
//  EssentialCPPDemo
//
//  Created by shaund on 2021/7/26.
//

#include "BTnode.hpp"

template <typename valType>
inline BTnode<valType>::BTnode(const valType &val)
    :_val(val)
{
    std::cout << typeid(this) << std::endl;
    _cnt = 1;
    _lchild = _rchild = 0;
}

template <typename valType> void BTnode<valType>::insert_value(const valType &val) {
    if (val == _val) {
        _cnt++;
        return;
    }
    // 小的在左边
    if (val < _val) {
        if(!_lchild) {
            _lchild = new BTnode(val);
        } else {
            _lchild->insert_value(val);
        }
    } else {
        if (!_righchild) {
            _rchild = new BTnode(val);
        } else {
            _rchild->insert_value(val);
        }
    }
}

template<typename valType> static void BTnode<valType>::lchild_leaf(BTnode *leaf, BTnode *subtree) {
    while (subtree->_lchild) {
        subtree = subtree->_lchild;
    }
    subtree->_lchild = leaf;
}

template<typename valType> void BTnode<valType>::remove_value(const valType &val, BTnode *& prev) {

}
