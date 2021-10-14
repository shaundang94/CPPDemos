//
// Created by shaund on 2021/5/11.
//

#ifndef UNTITLED_PERSION_H
#define UNTITLED_PERSION_H
#include <string>
using namespace std;

class Persion {
private:
    int _age;
    string _name;

public:
    Persion();
    Persion(int age, string name);
    Persion(const Persion &lhs);
    ~Persion();

    void debugDescription();
    virtual void debugAge();
    void debugName();
};


#endif //UNTITLED_PERSION_H
