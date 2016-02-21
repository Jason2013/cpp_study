cmake_minimum_required(VERSION 3.4)
project(CPP_Study)

include_directories(
    C:/chenchang/dev/boost_1_60_0
)

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

# case04 测试decltype的影响

add_executable(case04
    case04/main.cpp
)

# case05 测试decltype的影响

add_executable(case05
    case05/main.cpp
)

# case06 测试WinDBG

add_executable(case06
    case06/main.cpp
)
#set_target_properties(case05
#    PROPERTIES
#    COMPILE_FLAGS /wd"4819"
TEST3
TEST300
#)
