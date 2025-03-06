cmake_minimum_required(VERSION 3.16)

project(Map LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Map main.cpp
    State.h State.cpp
    Capital.h Capital.cpp)

include(GNUInstallDirs)
install(TARGETS Map
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
