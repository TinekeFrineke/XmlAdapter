
add_library(xml_adapter_interface INTERFACE
    interface/xmladapter/dom/IXmlAdapter.h
    interface/xmladapter/dom/IXmlAttribute.h
    interface/xmladapter/dom/IXmlDocument.h
    interface/xmladapter/dom/IXmlElement.h
    interface/xmladapter/dom/IXmlInputStream.h
    interface/xmladapter/dom/IXmlOutputStream.h
)

target_include_directories(xml_adapter_interface INTERFACE
    interface/
)


