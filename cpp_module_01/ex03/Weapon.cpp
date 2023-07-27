#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string ntitle)
{
    title = ntitle;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType()
{
    return ((const std::string&)type);
}

void Weapon::setType(std::string ntype)
{
    type = ntype;
}