#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n)
{
    
}

HumanB::~HumanB(){};

void    HumanB::setWeapon(Weapon &type)
{
    weapon = &type;
}
