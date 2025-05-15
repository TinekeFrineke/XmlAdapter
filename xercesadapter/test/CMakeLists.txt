
add_executable(TestXercesAdapter
    TestAdapterFactory.cpp
    TestAttribute.cpp
    TestDocument.cpp
    TestElement.cpp
    TestMain.cpp
)

target_include_directories(TestXercesAdapter PRIVATE
    ${CMAKE_SOURCE_DIR}/xercesadapter/include
)

target_link_libraries(TestXercesAdapter
    gtest::gtest
    xerces_adapter
)