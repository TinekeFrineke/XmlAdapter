
add_library(xerces_adapter STATIC
    source/XercesAdapter.cpp
    source/XercesAdapterFactory.cpp
    include/XercesAdapter.h
    interface/xercesadapter/XercesAdapterFactory.h
)

target_include_directories(xerces_adapter PUBLIC
    interface/xercesadapter/
)

target_include_directories(xerces_adapter PRIVATE
    include/
)

target_link_libraries(xerces_adapter PUBLIC
    xml_adapter_interface
)

add_subdirectory(test)
