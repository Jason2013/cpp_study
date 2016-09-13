#ifndef __OBJECT_H
#define __OBJECT_H

#include "local1.h"
#include <iostream>

class object
{
public:
    object(int n) : _n(n) { func1(); std::cout << "object(" << _n << ")" << std::endl; }
    ~object() { std::cout << "~object(" << _n << ")" << std::endl; };
private:
    int _n;
};

#endif // __OBJECT_H
