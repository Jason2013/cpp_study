set(PYTHON_DIR c:/Python27)
add_library(myModule SHARED
    myModule.c
)

target_include_directories(myModule PUBLIC ${PYTHON_DIR}/include)
target_link_libraries(myModule ${PYTHON_DIR}/libs/python27.lib)
set_target_properties(myModule PROPERTIES
SUFFIX .pyd)
