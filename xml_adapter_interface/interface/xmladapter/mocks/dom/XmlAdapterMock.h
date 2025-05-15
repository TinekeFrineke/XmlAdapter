
#pragma once

#include <gmock/gmock.h>

#include <xmladapter/dom/IXmlAdapter.h>


namespace DOM {


class XmlAdapterMock
        : public IXmlAdapter
{
public:
    MOCK_METHOD(std::vector<IXmlElement*>, elements, (), (override));
    MOCK_METHOD(std::vector<IXmlAttribute*>, attributes, (), (override));
};

} // namespace DOM