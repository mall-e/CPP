#include "HumanA.hpp"

HumanA::HumanA() {}

HumanA::~HumanA() {}

HumanA::HumanA(std::string nname, Weapon &nweapon)
{
    name = nname;
    weapon = &nweapon;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " <<
    weapon->getType() << std::endl;
}