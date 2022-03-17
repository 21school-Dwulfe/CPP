#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();
        FragTrap& operator=(const FragTrap& copy);
        void    attack(const std::string& target);
        void    highFivesGuys(void)const;
};

#endif
