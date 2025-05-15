
#pragma once

#include <gmock/gmock.h>

#include <xmladapter/dom/IXmlElement.h>


namespace DOM {

class IXmlAttribute;

class XmlElementMock
    : public IXmlElement
{
public:
    MOCK_METHOD(std::string, name, (), (const));
    MOCK_METHOD(std::vector<IXmlElement*>, children, (), (const override));
    MOCK_METHOD(std::vector<IXmlAttribute*>, attributes, (), (const override));
    MOCK_METHOD(IXmlElement*, addChild, (const std::string& name), (override));
    MOCK_METHOD(void, setAttribute, (const std::string& name, const std::string& value), (override));
};

} // namespace DOM