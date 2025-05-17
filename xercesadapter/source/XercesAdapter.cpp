
#include "XercesAdapter.h"

#include "xmladapter/dom/XmlDocument.h"


namespace xerces {


std::unique_ptr<DOM::XmlDocument> Adapter::read(const std::istream& input)
{
    return std::make_unique<DOM::XmlDocument>();
}

void Adapter::write(const DOM::XmlDocument& document, std::ostream& output)
{
}

} // namespace xerces
