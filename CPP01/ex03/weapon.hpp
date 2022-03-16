#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
    std::string type;
    public:
        Weapon ();
        Weapon(std::string type);
        ~Weapon(void);
        std::string&    getType();
        void    setType(std::string newType);
};

#endif
