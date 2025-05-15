
add_library(xml_adapter_interface INTERFACE
    interface/xmladapter/dom/IXmlAdapter.h
    interface/xmladapter/dom/IXmlAttribute.h
    interface/xmladapter/dom/IXmlDocument.h
    interface/xmladapter/dom/IXmlElement.h
    interface/xmladapter/dom/IXmlInputStream.h
    interface/xmladapter/dom/IXmlOutputStream.h
    interface/xmladapter/mocks/dom/XmlAdapterMock.h
    interface/xmladapter/mocks/dom/XmlAttributeMock.h
    interface/xmladapter/mocks/dom/XmlDocumentMock.h
    interface/xmladapter/mocks/dom/XmlElementMock.h
    interface/xmladapter/mocks/dom/XmlInputStreamMock.h
    interface/xmladapter/mocks/dom/XmlOutputStreamMock.h
)

target_include_directories(xml_adapter_interface INTERFACE
    interface/
)

target_link_libraries(xml_adapter_interface INTERFACE
    gtest::gtest
)

