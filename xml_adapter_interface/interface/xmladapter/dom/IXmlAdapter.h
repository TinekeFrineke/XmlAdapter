
#pragma once

#include <iosfwd>
#include <memory>
#include <string>
#include <vector>


namespace DOM {

struct XmlDocument;

class IXmlAdapter
{
public:
    virtual ~IXmlAdapter() = default;

    virtual std::unique_ptr<XmlDocument> read(const std::istream& input) = 0;
    virtual void write(const XmlDocument& document, std::ostream& output) = 0;
};

} // namespace DOM