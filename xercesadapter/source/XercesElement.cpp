
#include "XercesElement.h"

#include <algorithm>

#include "XercesAttribute.h"

namespace xerces {


Element::Element()
{
}

std::vector<DOM::IXmlElement*> Element::children() const
{
    std::vector<DOM::IXmlElement*> output;
    std::transform(m_children.begin(), m_children.end(), output.begin(),
                   [] (const auto& in) { return in.get(); }
    );
    return output;
}

std::vector<DOM::IXmlAttribute*> Element::attributes() const
{
    std::vector<DOM::IXmlAttribute*> output;
    std::transform(m_attributes.begin(), m_attributes.end(), output.begin(),
                   [] (const auto& in) { return in.second.get(); }
    );
    return output;
}

DOM::IXmlElement* Element::addChild(const std::string& name)
{
    m_children.push_back(std::make_unique<Element>());
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