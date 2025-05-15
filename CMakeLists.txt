cmake_minimum_required(VERSION 3.16)
project(xml_wrapper_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

add_subdirectory(xml_adapter_interface)
add_subdirectory(xercesadapter)
