
#pragma once


#include <string>
#include <vector>


namespace DOM {

class IXmlAttribute;
class IXmlElement;

class IXmlAdapter
{
public:
    virtual ~IXmlAdapter() = default;

    virtual std::vector<IXmlElement*> elements() = 0;
    virtual std::vector<IXmlAttribute*> attributes() = 0;

    virtual 
};

} // namespace DOM