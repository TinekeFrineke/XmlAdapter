
add_library(xml_adapter_interface INTERFACE
    interface/xmladapter/dom/IXmlAdapter.h
    interface/xmladapter/dom/XmlDocument.h
    interface/xmladapter/dom/XmlElement.h
    interface/xmladapter/mocks/dom/XmlAdapterMock.h
)

target_include_directories(xml_adapter_interface INTERFACE
    interface/
)

target_link_libraries(xml_adapter_interface INTERFACE
    gtest::gtest
)

