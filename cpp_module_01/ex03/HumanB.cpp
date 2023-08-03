#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::~HumanB() {}

HumanB::HumanB(std::string nname)
{
    name = nname;
}

void    HumanB::setWeapon(Weapon &nweapon)
{
    weapon = &nweapon;
}

void HumanB::attack()
{
    if (weapon)
    {
        std::cout << name << " attacks with their " <<
        weapon->getType() << std::endl;
    }
    else
        std::cout << ":(" << std::endl;
}
