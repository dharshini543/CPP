cmake_minimum_required(VERSION 3.16)

project(Testing LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Testing main.cpp
    Animal.h Animal.cpp
    Lion.h Lion.cpp)

include(GNUInstallDirs)
install(TARGETS Testing
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
