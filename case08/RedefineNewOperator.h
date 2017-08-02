// use debug new to track memory leaks under Windows
// NOTE: it'll break "placement new", so to use "placement new", please do the following:
//          #undef new
//          XXX* xxx = new (address) XXX;
//          #include "RedefineNewOperator.h"
// The code is ugly, but I cannot find a better way to do it. Fortunately "placement new"
// is rarely used. So I think such solution is acceptable.
// PAY ATTENTION: put this header file only in the source file and after all other head files!!!
#if defined(_DEBUG) && (defined(WIN32) || defined(_WIN32))
#ifndef new
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__) // use debug new in crt's new_debug.cpp
#endif

#define REDEFINE_NEW_OPERATOR_HEADER_FILE_INCLUDED

#endif