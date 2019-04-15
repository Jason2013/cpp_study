cmake_minimum_required(VERSION 3.12)

set(TARGET_NAME case15)
add_executable(${TARGET_NAME}
    main.cpp
)

target_include_directories(${TARGET_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../external/catch2/v2.7.1/include
    )
