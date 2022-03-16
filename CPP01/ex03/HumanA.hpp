#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "weapon.hpp"

class   HumanA
{
    std::string name;
    Weapon      &weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void    attack()
        {
            std::cout << this->name << " attack with their "
                    << this->weapon.getType() << std::endl;
        };
};

#endif
