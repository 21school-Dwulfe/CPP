#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), _weapon(weapon)
{
    
};

HumanA::~HumanA(void){};

Weapon& HumanA::getWeapon()const
{
    return (this->_weapon);
}

void    HumanA::setWeapon(Weapon& weapon)
{
    this->_weapon = weapon;
}
