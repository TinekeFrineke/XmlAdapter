#pragma once

#include <string>

class IXmlAttribute
{
public:
    virtual~IXmlAttribute() = default;

    virtual std::string getName() const = 0;
    virtual std::string getValue() const = 0;
};