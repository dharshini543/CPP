cmake_minimum_required(VERSION 3.16)

project(ClassAndObject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ClassAndObject main.cpp
    ClassAndObject.cpp
    ClassAndObject.h)

include(GNUInstallDirs)
install(TARGETS ClassAndObject
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
