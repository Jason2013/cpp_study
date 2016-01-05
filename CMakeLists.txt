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
