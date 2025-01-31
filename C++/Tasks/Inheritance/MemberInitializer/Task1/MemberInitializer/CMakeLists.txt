cmake_minimum_required(VERSION 3.16)

project(MemberInitializer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MemberInitializer main.cpp
    Car.h Car.cpp
    BMW.h BMW.cpp)

include(GNUInstallDirs)
install(TARGETS MemberInitializer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
