
#pragma once

#include <memory>
#include <map>

#include "xmladapter/dom/IXmlElement.h"

namespace DOM {
class IXmlAttribute;
}

namespace xerces {

class Attribute;

class Element
    : public DOM::IXmlElement
{
public:
    Element(const std::string& name);
    virtual ~Element();

    // Inherited via IXmlElement
    std::string name() const override;
    std::vector<DOM::IXmlElement*> children() const override;
    std::vector<DOM::IXmlAttribute*> attributes() const override;
    IXmlElement* addChild(const std::string& name) override;
    void setAttribute(const std::string& name, const std::string& value) override;

private:
    std::string m_name;
    std::vector<std::unique_ptr<Element>> m_children;
    std::map<std::string, std::unique_ptr<Attribute>> m_attributes;
};

} // namespace xerces