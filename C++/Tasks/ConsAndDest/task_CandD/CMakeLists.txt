cmake_minimum_required(VERSION 3.16)

project(task_CandD LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(task_CandD main.cpp
    Tv.h Tv.cpp)

include(GNUInstallDirs)
install(TARGETS task_CandD
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
