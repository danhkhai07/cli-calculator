cmake_minimum_required(VERSION 4.0)
project(CLICalculator)

# Change install path
if( CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT )
    message(STATUS "Setting default CMAKE_INSTALL_PREFIX path to ${CMAKE_BINARY_DIR}/install")
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE STRING "The path to use for make install" FORCE)
endif()


# Libraries & include dirs
add_subdirectory(src)

# Binary
add_executable(cliCalc src/main.cpp)
target_include_directories(cliCalc PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(cliCalc PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(cliCalc PRIVATE interfaceLibrary)