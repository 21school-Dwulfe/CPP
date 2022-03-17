#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _hitpoints;
        int _energyPoints;
        int _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& clapTrap);
        ClapTrap& operator=(const ClapTrap &clapTrap);
        ~ClapTrap();
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        int             getEnergypoints(void) const;
        int    getHitpoints(void) const;
        std::string     getName(void) const;
        int             getAttackDamage(void) const;
        void            setName(std::string name);
        void            setHitpoints(unsigned int points);
        void            setEnergypoints(int points);
        void            setAttackDamage(int damage);
        

};

#endif
