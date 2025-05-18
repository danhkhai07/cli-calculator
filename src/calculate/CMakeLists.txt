add_library(CLICalc_calculate STATIC calculate.cpp)
target_include_directories(CLICalc_calculate PRIVATE ${CMAKE_SOURCE_DIR}/include)