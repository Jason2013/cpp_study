/*
 * Find memory leaks with the CRT library
 * https://docs.microsoft.com/en-us/visualstudio/debugger/finding-memory-leaks-using-the-crt-library?view=vs-2019
 */

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
