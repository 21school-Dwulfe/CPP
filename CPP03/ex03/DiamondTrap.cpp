#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl; 
}

DiamondTrap::DiamondTrap(const std::string &name) 
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamodTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap) : ClapTrap(), ScavTrap(), FragTrap()
{
    *this = trap;
    std::cout << "DiamondTrap Copy constructor " << trap._name << " was called" << std::endl; 
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &trap)
{
    std::cout << trap.getName() << std::endl;
    std::cout << "DiamondTrap " << trap._name << " assignment operator called" << std::endl;
    if (this != &trap)
    {
        this->_name = trap._name;
        this->_hitpoints = trap._hitpoints;
        this->_energyPoints = trap._energyPoints;
        this->_attackDamage = trap._attackDamage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() 
{
    std::cout << "My name is " << this->_name << " and my Parents name is " << ClapTrap::_name << std::endl;
}