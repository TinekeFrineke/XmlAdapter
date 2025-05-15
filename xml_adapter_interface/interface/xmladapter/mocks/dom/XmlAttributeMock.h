#pragma once

#include <gmock/gmock.h>

#include <xmladapter/dom/IXmlAttribute.h>

namespace DOM {

class XmlAttributeMock
    : public IXmlAttribute
{
public:
    MOCK_METHOD(std::string, name, (), (const override));
    MOCK_METHOD(std::string, value, (), (const override));
    MOCK_METHOD(void, name, (const std::string&), (override));
    MOCK_METHOD(void, value, (const std::string&), (override));
};

} // namespace DOM