//
//  string_BTnode.hpp
//  EssentialCPPDemo
//
//  Created by shaund on 2021/7/26.
//

#ifndef string_BTnode_hpp
#define string_BTnode_hpp

#include <stdio.h>
#include <string>

/*
 像这样的话，由于缺乏template机制，为了存储不同类型的数值，需要实现不同的BTnode类
 */

class string_BTnode {
public:
private:
    std::string _val;
    int _cnt;
    string_BTnode *_lchild;
    string_BTnode *_rchild;
};

#endif /* string_BTnode_hpp */
