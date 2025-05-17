add_library(interfaceLibrary STATIC ${CMAKE_CURRENT_SOURCE_DIR}/interface.cpp)
target_include_directories(interfaceLibrary PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Package
install(TARGETS interfaceLibrary
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)