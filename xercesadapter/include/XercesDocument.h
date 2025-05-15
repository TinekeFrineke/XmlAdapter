
#pragma once

#include <memory>

#include "xmladapter/dom/IXmlDocument.h"
#include "xmladapter/dom/IXmlElement.h"

namespace xerces {

class Element;

class Document
    : public DOM::IXmlDocument
    , public DOM::IXmlElement
{
public:
    Document();

    // Inherited via IXmlDocument
    std::vector<DOM::IXmlElement*> children() const override;
    std::vector<DOM::IXmlAttribute*> attributes() const override;
    IXmlElement* addChild(const std::string& name) override;
    void setAttribute(const std::string& name, const std::string& value) override;
    void read(DOM::IXmlInputStream& stream) override;
    void write(DOM::IXmlOutputStream& stream) override;

private:
    
    std::unique_ptr<Element> m_element;
};

} // namespace xerces