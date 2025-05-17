
#pragma once

#include <gmock/gmock.h>

#include "interface/xmladapter/dom/IXmlAdapter.h"

namespace DOM {


class XmlAdapterMock
    : public IXmlAdapter
{
public:
    MOCK_METHOD(std::unique_ptr<XmlDocument>, read, (const std::istream&), (override));
    MOCK_METHOD(void, write, (const XmlDocument& document, const std::ostream& output), (override));
};


} // namespace DOM
