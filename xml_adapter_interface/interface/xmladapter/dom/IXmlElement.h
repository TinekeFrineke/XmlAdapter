
#pragma once


#include <string>
#include <vector>


namespace DOM {

class IXmlAttribute;

class IXmlElement
{
public:
    virtual ~IXmlElement() = default;

    virtual std::string name() const = 0;
    virtual std::vector<IXmlElement*> children() const = 0;
    virtual std::vector<IXmlAttribute*> attributes() const = 0;
    virtual IXmlElement* addChild(const std::string& name) = 0;
    virtual void setAttribute(const std::string& name, const std::string& value) = 0;
};

} // namespace DOM