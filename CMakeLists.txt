cmake_minimum_required(VERSION 4.0)
project(CLICalculator)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Change install path
if( CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT )
    message(STATUS "Setting default CMAKE_INSTALL_PREFIX path to ${CMAKE_BINARY_DIR}/install")
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE STRING "The path to use for make install" FORCE)
endif()

# Binary
add_executable(CLICalc src/main.cpp src/commandRegister/commandRegister.cpp)

# Add sub dirs
add_subdirectory(src)

target_include_directories(CLICalc PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(CLICalc PRIVATE ${CMAKE_SOURCE_DIR}/src)

# Link libraries
target_link_libraries(CLICalc PRIVATE CLICalc_commandRegister)

# Package
install(TARGETS CLICalc
    RUNTIME DESTINATION bin
)

install(DIRECTORY include/.
    DESTINATION include
)

install(FILES logs.txt README.md DESTINATION .)