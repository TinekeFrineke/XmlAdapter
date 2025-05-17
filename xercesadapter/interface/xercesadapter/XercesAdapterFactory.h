#pragma once

#include <memory>

namespace DOM {
class IXmlAdapter;
} // namespace DOM

namespace xerces {

std::unique_ptr<DOM::IXmlAdapter> createAdapter();

} // namespace xerces