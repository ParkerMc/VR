cmake_minimum_required(VERSION 3.3)
project(ParkerVr C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(../openvr/headers/)

set(SOURCE_FILES
        driver_sample.cpp
        driverlog.cpp
        driverlog.h
        )

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
