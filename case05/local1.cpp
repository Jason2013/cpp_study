#include <iostream>
#include "local1.h"
#include "object2.h"

void func1()
{
    static object2 loc1(-1);
    std::cout << "func1()" << std::endl;
}
