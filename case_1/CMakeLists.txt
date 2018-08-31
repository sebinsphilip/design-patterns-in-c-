cmake_minimum_required(VERSION 2.8)

set (BIN_NAME "DuckClass")

include_directories (
    ${CMAKE_CURRENT_SOURCE_DIR}/include/

    )

add_executable (
    ${BIN_NAME}

    ${CMAKE_CURRENT_SOURCE_DIR}/source/Duck.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/FlyNoWay.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/FlyWithWings.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/Main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/MallardDuck.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/WoddenDuck.cpp
    )
