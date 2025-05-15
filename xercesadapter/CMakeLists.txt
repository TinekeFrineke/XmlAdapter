
add_library(xerces_adapter STATIC
    source/XercesAdapterFactory.cpp
    source/XercesAttribute.cpp
    source/XercesDocument.cpp
    source/XercesElement.cpp
    include/XercesAttribute.h
    include/XercesDocument.h
    include/XercesElement.h
    interface/xercesadapter/XercesAdapterFactory.h
)

target_include_directories(xerces_adapter PRIVATE
    include

)

target_link_libraries(xerces_adapter PUBLIC
    xml_adapter_interface
)

target_link_libraries(xerces_adapter PRIVATE
    xml_adapter_interface
)

add_subdirectory(test)
