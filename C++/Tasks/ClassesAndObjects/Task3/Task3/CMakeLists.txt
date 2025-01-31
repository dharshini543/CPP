cmake_minimum_required(VERSION 3.16)

project(Task3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Task3 main.cpp
    Laptop.h Laptop.cpp)

include(GNUInstallDirs)
install(TARGETS Task3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
