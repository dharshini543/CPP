cmake_minimum_required(VERSION 3.16)

project(Car_Task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Car_Task main.cpp
    Owner.h Owner.cpp
    Car.h Car.cpp
    Driver.h Driver.cpp)

include(GNUInstallDirs)
install(TARGETS Car_Task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
