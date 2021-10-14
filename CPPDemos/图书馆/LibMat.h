//
// Created by shaund on 2021/5/16.
//

#ifndef MAIN_CPP_LIBMAT_H
#define MAIN_CPP_LIBMAT_H
#include <string>

class LibMat {
public:
    LibMat();
    virtual ~LibMat();

    virtual void print() const;
    virtual std::string getMyClass() const;
};

void printLM(LibMat &mat);


#endif //MAIN_CPP_LIBMAT_H
