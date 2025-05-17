
#include "XercesAdapterFactory.h"

#include "XercesAdapter.h"

namespace xerces {

std::unique_ptr<DOM::IXmlAdapter> createAdapter()
{
    return std::make_unique<Adapter>();
}

} // namespace xerces