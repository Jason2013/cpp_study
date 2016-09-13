cmake_minimum_required(VERSION 3.4)
project(CPP_Study)

add_subdirectory(case01)

# case02 测试vector与move constructor、move assignment的影响
add_subdirectory(case02)

# case03 测试virtual destructor的影响
add_subdirectory(case03)

# case04 测试通过全局变量初始化对象列表的影响
add_subdirectory(case04)

# case05 测试通过全局变量、局部静态变量的初始化顺序
add_subdirectory(case05)

add_subdirectory(case12)

