#ifndef __OBJECT2_H
#define __OBJECT2_H

#include <iostream>

class object2
{
public:
    object2(int n) : _n(n) { std::cout << "object2(" << _n << ")" << std::endl; }
    ~object2() { std::cout << "~object2(" << _n << ")" << std::endl; };
private:
    int _n;
};

#endif // __OBJECT2_H
