//
// Created by shaund on 2021/5/15.
//

#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H
#include "Persion.h"

class Student : public Persion {
private:
    string _skill;

public:
    Student();
    Student(string skill);
    Student(string skill, int age, string name);
    Student(const Student &lhs);
    ~Student();
    void debugSkill();

    //重定义基类方法
    virtual void debugAge();
    void debugName();
};


#endif //UNTITLED_STUDENT_H
