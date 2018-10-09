cmake_minimum_required(VERSION 2.8)

set (BIN_NAME "WeatherData")

include_directories (
    ${CMAKE_CURRENT_SOURCE_DIR}/include/

    )

add_executable (
    ${BIN_NAME}

    ${CMAKE_CURRENT_SOURCE_DIR}/source/Main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/Subject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/CurrentConditionsDisplay.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/WeatherData.cpp
    )
