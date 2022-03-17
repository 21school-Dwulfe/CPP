#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap::ClapTrap()
{
    _name = "Unknown ScavTrap";
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap()
{
    _name = name;
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor " << _name <<" called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap):ClapTrap::ClapTrap()
{
    *this = scavTrap;
    std::cout << "ScavTrap Copy constructor " << scavTrap._name << " was called" << std::endl; 
}

ScavTrap & ScavTrap::operator= (const ScavTrap &scavTrap)
{
    if (this != &scavTrap)
    {
        this->_name = scavTrap._name;
        this->_hitpoints = scavTrap._hitpoints;
        this->_energyPoints = scavTrap._hitpoints;
        this->_attackDamage = scavTrap._attackDamage;
    }
    std::cout << "ScavTrap" << this->_name << " assignment operator called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor " << _name <<" called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
    { 
        std::cout << "ScavTrap " << this->_name << " has no mana" <<std::endl;
        return ;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead. " << "Cannot continue attack!" << std::endl;
        return ;
    }
    std::cout<<"ScavTrap "<<_name<<" attacks "<<target<<", causing "<<_attackDamage<<" points of damage!"<<std::endl;
    this->_energyPoints--;
}

void    ScavTrap::guardGate()const
{
    if (this->_hitpoints > 0)
        std::cout << "ScavTrap " << this->getName() << " entering in Gate keeper mode!" << std::endl;
    else
        std::cout << "ScavTrap " << this->getName() << " dead!" << std::endl;

}
