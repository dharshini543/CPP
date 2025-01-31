cmake_minimum_required(VERSION 3.16)

project(Encapsulation_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Encapsulation_1 main.cpp
    Car.h Car.cpp)

include(GNUInstallDirs)
install(TARGETS Encapsulation_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
