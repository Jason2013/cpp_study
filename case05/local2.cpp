#include <iostream>
#include "local2.h"
#include "object.h"

void func2()
{
    static object loc2(-2);
    std::cout << "func2()" << std::endl;
}
