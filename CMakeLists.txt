cmake_minimum_required(VERSION 3.4)
project(CPP_Study)

set(TRGT case01)
add_executable(${TRGT}
    case01/main.cpp
)

# case02 测试vector与move constructor、move assignment的影响

add_executable(case02
    case02/main.cpp
)

# case03 测试virtual destructor的影响

add_executable(case03
    case03/main.cpp
)

# case10 测试chrono::steady_clock的影响

add_executable(case10
    case10/main.cpp
)

add_executable(case11
    case11/main.cpp
)

# Boost Type Index 示例

add_executable(case12
    case12/stdafx.h
    case12/stdafx.cpp
    case12/main.cpp
)
target_include_directories(case12 PUBLIC
    D:/dev/p4/dk/dk/win/boost/1.59.0/vc14/include
)
set_target_properties(case12
    PROPERTIES COMPILE_FLAGS "-Yu -FIstdafx.h"
)
set_source_files_properties(case12/stdafx.cpp
    COMPILE_FLAGS -Yc
)
