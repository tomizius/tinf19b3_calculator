cmake_minimum_required(VERSION 3.15)
project(calculator)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt5Widgets REQUIRED)

add_executable(calculator main.cpp app/classes/Calculation.cpp app/classes/Calculation.h app/classes/Calculator.cpp app/classes/Calculator.h)

target_link_libraries(calculator Qt5::Widgets)