
add_executable(TestXercesAdapter
    TestMain.cpp
)

target_include_directories(TestXercesAdapter PRIVATE
    ${CMAKE_SOURCE_DIR}/xercesadapter/include
)

target_link_libraries(TestXercesAdapter
    xerces_adapter
)