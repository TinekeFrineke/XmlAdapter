
#include "XercesDocument.h"

#include "XercesElement.h"


namespace xerces {


Document::Document()
    : m_element(std::make_unique<Element>("Document"))
{
}

std::vector<DOM::IXmlElement*> Document::children() const
{
    return m_element->children();;
}

std::vector<DOM::IXmlAttribute*> Document::attributes() const
{
    return m_element->attributes();
}

DOM::IXmlElement* Document::addChild(const std::string& name)
{
    return m_element->addChild(name);
}

void Document::setAttribute(const std::string& name, const std::string& value)
{
    m_element->setAttribute(name, value);
}

void Document::read(DOM::IXmlInputStream& /*stream*/)
{
}

void Document::write(DOM::IXmlOutputStream& /*stream*/)
{
}


} // namespace xerces