
#pragma once


#include <string>
#include <vector>

class IXmlAdapter
{
public:
    virtual ~IXmlAdapter() = default;

    virtual std::vector<std::string> elements() = 0;
    virtual std::vector<std::string> attributes() = 0;

    virtual 
};