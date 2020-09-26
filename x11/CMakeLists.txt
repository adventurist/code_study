cmake_minimum_required(VERSION 2.8)
project(x11)

SET(LINKER_FLAGS "-L/usr/include/X11 -L/usr/X11R6/lib -lX11")

SET(CMAKE_EXE_LINKER_FLAGS  "${LINKER_FLAGS}")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME} "main.cpp")

TARGET_LINK_LIBRARIES(${PROJECT_NAME})
