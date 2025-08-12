cmake_minimum_required(VERSION 3.16)

project(ReadDataFromFile LANGUAGES C)

add_executable(ReadDataFromFile main.c)

include(GNUInstallDirs)
install(TARGETS ReadDataFromFile
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
