cmake_minimum_required(VERSION 3.16)

project(HeaderFile LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HeaderFile main.cpp
    Log.h Log.cpp)

include(GNUInstallDirs)
install(TARGETS HeaderFile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
