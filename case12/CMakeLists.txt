add_executable(case12
#    stdafx.h
#    stdafx.cpp
    main.cpp
)

set(BOOST_BASE C:/chenchang/dev/boost_1_60_0)
target_include_directories(case12 PUBLIC
    ${BOOST_BASE}
)
#set_target_properties(case12
#    PROPERTIES COMPILE_FLAGS "-Yu -FIstdafx.h"
#)
#set_source_files_properties(stdafx.cpp
#    COMPILE_FLAGS -Yc
#)
