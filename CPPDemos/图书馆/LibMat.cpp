//
// Created by shaund on 2021/5/16.
//

#include "LibMat.h"
#include <iostream>

using namespace std;

LibMat::LibMat() {
    cout << "LibMat::LibMat(); " << getMyClass() << endl;
}

LibMat::~LibMat() {
    cout << "LibMat::~LibMat()" << endl;
}

void LibMat::print() const {
    cout << "LibMat::printLM() const" << endl;
}

std::string LibMat::getMyClass() const {
    return "LibMat";
}

void printLM(LibMat &mat) {
    cout << "in global printLM(): ";
    mat.print();
}