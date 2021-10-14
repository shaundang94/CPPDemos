//
// Created by shaund on 2021/5/11.
//

#include "Persion.h"
#include <iostream>

Persion::Persion() {
    _age = 0;
    _name = "";
}

Persion::Persion(int age, string name) {
    _age = age;
    _name = name;
}

Persion::Persion(const Persion &lhs) {
    _age = lhs._age;
    _name = lhs._name;
}

Persion::~Persion() {
    _name = nullptr;
}

void Persion::debugDescription() {
    cout << _name << "; " << _age << endl;
}

void Persion::debugAge() {
    cout << "Persion::debugAge(): " << "_age=" << _age << endl;
}

void Persion::debugName() {
    cout << "Persion::debugName(): " << "_name=" << _name << endl;
}