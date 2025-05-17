#pragma once

#include <memory>

#include "xmladapter/dom/IXmlAdapter.h"



namespace xerces {

class Adapter
    : public DOM::IXmlAdapter
{
    // Inherited via IXmlAdapter
    std::unique_ptr<DOM::XmlDocument> read(const std::istream& input) override;
    void write(const DOM::XmlDocument& document, std::ostream& output) override;
};

} // namespace xerces