#ifndef __MEMORY_DEBUG_H
#define __MEMORY_DEBUG_H

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#endif

// only enable crt debug under Windows
// PAY ATTENTION: put this header file before any other head files, otherwise some memory leaks detail info may miss!!!
#if defined(_DEBUG) && (defined(WIN32) || defined(_WIN32))
#define _CRTDBG_MAP_ALLOC // record file name, line number info
#include <stdlib.h>
#include <crtdbg.h>
#endif

#define MEM_DEBUG_HEADER_FILE_INCLUDED

// Because MemoryDebug.h must be the first included header file in every source file, including BuildFlags.h here makes sure
// build flags are available for every source file.
//#include "BuildFlags.h"

#endif


