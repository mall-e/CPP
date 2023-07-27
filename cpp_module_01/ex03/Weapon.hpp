#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
    std::string title;
public:
    Weapon();
    Weapon(std::string title);
    ~Weapon();

    const std::string&  getType();
    void    setType(std::string ntype);
};

#endif