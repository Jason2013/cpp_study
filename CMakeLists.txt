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

# case06 测试两个类相互引用对方的成员函数时，该如何声明和定义
add_subdirectory(case06)

# case07 测试 Python/C 扩展
add_subdirectory(case07)

# case08 用 VC 的 crtdbg 库检测内存泄露
add_subdirectory(case08)

# case09 测试 chrono 计时功能
add_subdirectory(case09)

# case10 用 chrono 计时功能测试 map 与 unordered_map 的性能
add_subdirectory(case10)

# case11 测试单例模式的局部静态对象的构造函数何时执行、执行次数
add_subdirectory(case11)

add_subdirectory(case12)

