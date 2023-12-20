cmake_minimum_required(VERSION 3.27)

project(DummyLib)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(dummylib SHARED include/dummy.h src/dummy.cpp)

target_include_directories(dummylib PUBLIC include)

target_link_libraries(dummylib PUBLIC)

set_source_files_properties(dummylib.def PROPERTIES HEADER_FILE_ONLY TRUE)

set_target_properties(dummylib PROPERTIES LINKER_LANGUAGE CXX)