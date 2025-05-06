cmake_minimum_required(VERSION 3.16)

project(Loops LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Loops main.cpp
    Log.h Log.cpp)

include(GNUInstallDirs)
install(TARGETS Loops
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
