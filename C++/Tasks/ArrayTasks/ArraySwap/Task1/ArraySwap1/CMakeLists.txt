cmake_minimum_required(VERSION 3.16)

project(ArraySwap1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ArraySwap1 main.cpp)

include(GNUInstallDirs)
install(TARGETS ArraySwap1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
