#include "MemoryDebug.h" // muse be included first

#include <iostream>

#include "RedefineNewOperator.h" // muse be included last

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    char* p = new char[10];
    char* p2 = (char*)malloc(100);

    return 0;
}
