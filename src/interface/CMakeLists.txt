add_library(interfaceLibrary STATIC interface.cpp)
target_include_directories(interfaceLibrary PRIVATE ${CMAKE_SOURCE_DIR/include})