#include "weapon.hpp"

Weapon::Weapon (){};

Weapon::Weapon(std::string type): type(type){};

Weapon::~Weapon(void){};

std::string&    Weapon::getType()
{
    return ((std::string &)type);
};

void    Weapon::setType(std::string newType)
{
    this->type = newType;
};
