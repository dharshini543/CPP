cmake_minimum_required(VERSION 3.16)

project(Pointers LANGUAGES C)

add_executable(Pointers main.c)

include(GNUInstallDirs)
install(TARGETS Pointers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
