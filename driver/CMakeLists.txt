cmake_minimum_required(VERSION 3.3)
project(ParkerVr C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_SHARED_LIBRARY_PREFIX "")

include_directories(../openvr/headers/)

set(SOURCE_FILES
        src/driver_parkervr.cpp
        src/driverlog.cpp
        src/driverlog.h
        )

add_definitions(-DDRIVER_SAMPLE_EXPORTS)
add_library("driver_parkervr" SHARED ${SOURCE_FILES})
