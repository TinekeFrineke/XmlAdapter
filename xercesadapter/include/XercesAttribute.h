#pragma once


#include "xmladapter/dom/IXmlAttribute.h"

namespace xerces {

class Attribute
    : public DOM::IXmlAttribute
{
public:
    Attribute();

    // Inherited via IXmlAttribute
    std::string name() const override;
    std::string value() const override;
    void name(const std::string& name) override;
    void value(const std::string& value) override;

private:
    std::string m_name;
    std::string m_value;
};

} // namespace xerces