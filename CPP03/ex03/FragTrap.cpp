#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap::ClapTrap()
{
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap::ClapTrap(name)
{
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor " << _name <<" called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &scavTrap):ClapTrap::ClapTrap()
{
    *this = scavTrap;
    std::cout << "FragTrap Copy constructor " << scavTrap._name << " was called" << std::endl; 
}

FragTrap & FragTrap::operator= (const FragTrap &scavTrap)
{
    if (this != &scavTrap)
    {
        this->_name = scavTrap._name;
        this->_hitpoints = scavTrap._hitpoints;
        this->_energyPoints = scavTrap._hitpoints;
        this->_attackDamage = scavTrap._attackDamage;
    }
    std::cout << "FragTrap" << this->_name << " assignment operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor " << _name <<" called" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
    { 
        std::cout << "FragTrap " << this->_name << " has no mana" <<std::endl;
        return ;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << "FragTrap " << this->_name << " is dead. " << "Cannot continue attack!" << std::endl;
        return ;
    }
    std::cout<<"FragTrap "<<_name<<" attacks "<<target<<", causing "<<_attackDamage<<" points of damage!"<<std::endl;
    this->_energyPoints--;
}

void    FragTrap::highFivesGuys()const
{
    if (this->_hitpoints > 0)
    {
        std::cout << "FragTrap " << this->getName() << " High five Guys " << std::endl;
    }
    else
        std::cout << "FragTrap " << this->getName() << " all dead!" << std::endl;

}
