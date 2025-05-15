
#include "XercesElement.h"

#include <algorithm>

#include "XercesAttribute.h"

namespace xerces {


Element::Element( const std::string& name)
    : m_name(name)
{
}

Element::~Element() = default;

std::string Element::name() const
{
    return m_name;
}

std::vector<DOM::IXmlElement*> Element::children() const
{
    std::vector<DOM::IXmlElement*> output;
    for (const auto& child : m_children)
        output.push_back(child.get());
    return output;
}

std::vector<DOM::IXmlAttribute*> Element::attributes() const
{
    std::vector<DOM::IXmlAttribute*> output;
    for (const auto& attribute : m_attributes)
        output.push_back(attribute.second.get());
    return output;
}

DOM::IXmlElement* Element::addChild(const std::string& name)
{
    m_children.push_back(std::make_unique<Element>(name));
    return m_children.back().get();
}

void Element::setAttribute(const std::string& name, const std::string& value)
{
    auto attribute(std::make_unique<Attribute>());
    attribute->name(name);
    attribute->value(value);
    m_attributes[name] = std::move(attribute);
}


} // namespace xerces