
#pragma once

#include <map>
#include <memory>
#include <string>
#include <vector>

namespace DOM {

struct XmlElement
{
    std::string m_name;
    std::map<std::string, std::unique_ptr<XmlElement>> m_children;
    std::map<std::string, std::string> m_attributes;
};

} // namespace DOM