cmake_minimum_required(VERSION 3.16)

project(Virtual LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Virtual main.cpp)

include(GNUInstallDirs)
install(TARGETS Virtual
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
