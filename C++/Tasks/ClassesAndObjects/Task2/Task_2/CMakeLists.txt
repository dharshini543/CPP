cmake_minimum_required(VERSION 3.16)

project(Task_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Task_2 main.cpp
    Student.h Student.cpp)

include(GNUInstallDirs)
install(TARGETS Task_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
