cmake_minimum_required(VERSION 3.16)

project(FunctionOverriding LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FunctionOverriding main.cpp
    bike.h bike.cpp
    Car.h Car.cpp
    Vehicle.h Vehicle.cpp)

include(GNUInstallDirs)
install(TARGETS FunctionOverriding
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
