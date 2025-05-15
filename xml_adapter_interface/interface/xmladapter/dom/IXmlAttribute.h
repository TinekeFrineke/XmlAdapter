#pragma once

#include <string>

namespace DOM {

class IXmlAttribute
{
public:
    virtual~IXmlAttribute() = default;

    virtual std::string name() const = 0;
    virtual std::string value() const = 0;
    virtual void name(const std::string& name) = 0;
    virtual void value(const std::string& value) = 0;
};

} // namespace DOM