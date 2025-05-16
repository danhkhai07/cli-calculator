add_library(interface_dll STATIC interface.cpp)
target_include_directories(interface_dll PRIVATE ${CMAKE_SOURCE_DIR/include})