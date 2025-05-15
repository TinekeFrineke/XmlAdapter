#pragma once


#include <xmladapter/dom/IXmlElement.h>

namespace DOM {


class IXmlInputStream;
class IXmlOutputStream;

class IXmlDocument
{
public:
    virtual ~IXmlDocument() = default;

    virtual void read(IXmlInputStream& stream) = 0;
    virtual void write(IXmlOutputStream& stream) = 0;
};

} // namespace DOM