cmake_minimum_required(VERSION 3.16)

project(Functions LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Functions main.cpp
    Operations.h Operations.cpp)

include(GNUInstallDirs)
install(TARGETS Functions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
