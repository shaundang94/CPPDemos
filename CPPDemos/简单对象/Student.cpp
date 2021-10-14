//
// Created by shaund on 2021/5/15.
//

#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
    _skill = "";
}

Student::Student(string skill) {
    _skill = skill;
}

Student::Student(string skill, int age, string name): Persion(age, name) { //用初始化参数列表显式调用父类构造函数

}

Student::Student(const Student &lhs) {
    _skill = lhs._skill;
}

Student::~Student() {

}

void Student::debugSkill() {
    cout << _skill << endl;
}

void Student::debugAge() {
    cout << "Student::debugAge(): " << "_age=" << "???" << endl;
}

void Student::debugName() {
    cout << "Student::debugAge(): " << "_age=" << "???" << endl;
}