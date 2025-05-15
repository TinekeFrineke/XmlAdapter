#pragma once


namespace DOM {
class IXmlDocument;
} // namespace DOM

namespace xerces {

std::unique_ptr<DOM::IXmlDocument> createDocument();

} // namespace xerces