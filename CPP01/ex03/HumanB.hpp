#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "weapon.hpp"

class   HumanB
{
    std::string name;
    Weapon      *weapon;

    public:
        HumanB(std::string name);
        ~HumanB();

        void    attack()
        {
            std::cout << this->name << " attack with their "
                    << weapon->getType() << std::endl;
        };
        Weapon& getWeapon();
        void    setWeapon(Weapon &type);
};

#endif
