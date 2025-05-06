cmake_minimum_required(VERSION 3.16)

project(Classes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Classes main.cpp
    Player.h Player.cpp)

include(GNUInstallDirs)
install(TARGETS Classes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
