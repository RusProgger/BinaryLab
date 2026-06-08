cmake_minimum_required(VERSION 3.10)
project(BinaryLab)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(BinaryLab
    src/main.cpp
    src/locale_utils.cpp
    src/menu.cpp
    src/binary.cpp
)

target_include_directories(BinaryLab PRIVATE ${CMAKE_SOURCE_DIR}/include)