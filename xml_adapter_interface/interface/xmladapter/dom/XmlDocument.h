#pragma once

#include <memory>

#include "XmlElement.h"

namespace DOM {

struct XmlDocument
{
    std::unique_ptr<XmlElement> m_root;
};

} // namespace DOM
