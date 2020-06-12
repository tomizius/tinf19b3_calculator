cmake_minimum_required(VERSION 3.15)
project(calculator)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt5Widgets REQUIRED)

set(CMAKE_PREFIX_PATH "/usr/bin/qmake")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


add_executable(
        calculator
        main.cpp
        app/classes/Calculation.cpp
        app/classes/Calculation.h
        app/classes/Calculator.cpp
        app/classes/Calculator.h
        app/classes/CalculatorGUI.cpp
        app/classes/CalculatorGUI.h
        app/ui/calculator.ui
)

target_link_libraries(calculator Qt5::Widgets)