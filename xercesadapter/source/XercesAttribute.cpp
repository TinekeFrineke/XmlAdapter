
#include "XercesAttribute.h"

namespace xerces {

Attribute::Attribute()
{

}

std::string Attribute::name() const
{
    return m_name;
}

std::string Attribute::value() const
{
    return m_value;
}

void Attribute::name(const std::string& name)
{
    m_name = name;
}

void Attribute::value(const std::string& value)
{
    m_value = value;
}

} // namespace xerces