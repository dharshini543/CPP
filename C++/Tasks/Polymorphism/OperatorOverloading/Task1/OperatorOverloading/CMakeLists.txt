cmake_minimum_required(VERSION 3.16)

project(OperatorOverloading LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OperatorOverloading main.cpp
    add.h add.cpp)

include(GNUInstallDirs)
install(TARGETS OperatorOverloading
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
