#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    _name = "Unknown ClapTrap";
    _hitpoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
    _hitpoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "Constructor " << _name <<" called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    *this = clapTrap;
    std::cout << "Copy constructor " << clapTrap._name << " was called" << std::endl; 
}

ClapTrap & ClapTrap::operator= (const ClapTrap &clapTrap)
{
    if (this != &clapTrap)
    {
        this->_name = clapTrap._name;
        this->_hitpoints = clapTrap._hitpoints;
        this->_energyPoints = clapTrap._hitpoints;
        this->_attackDamage = clapTrap._attackDamage;
    }
    std::cout << this->_name << " assignment operator called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor " << _name <<" called" << std::endl;
}

void            ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
    { 
        std::cout << this->_name << " has no mana" <<std::endl;
        return ;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead. " << "Cannot continue attack!" << std::endl;
        return ;
    }
    std::cout<<"ClapTrap "<<_name<<" attacks "<<target<<", causing "<<_attackDamage<<" points of damage!"<<std::endl;
    this->_energyPoints--;
}

void            ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints > (int)amount)
    {
        std::cout << this->_name << " take " << (_hitpoints - (int)amount < 0 ? _hitpoints : amount) << " points of damage" << std::endl;
        this->_hitpoints -= amount;
    }
    else if (this->_hitpoints != 0 && this->_hitpoints <= (int)amount)
    {
        this->_hitpoints = 0;
        std::cout << this->_name << " is died" << std::endl;
        return ;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name << " is already dead." << " Cannot be damaged" << std::endl;
        return ;
    }
}

void            ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0)
    { 
        std::cout << this->_name << " has no mana" <<std::endl;
        return ;
    }
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name << " is already dead." << " Cannot be repaired or healed" <<std::endl;

        return ;
    }
    unsigned int i = 0;
    while (i < amount && this->_energyPoints)
    {
        std::cout<<_name << " is repaired" <<std::endl;
        this->_hitpoints++;
        this->_energyPoints--;
        i++;
    }
    if (_energyPoints == 0 && amount - i > 0)
        std::cout << this->_name << " has no enouth mana. "  << "Required " << amount - i <<std::endl;
}

int             ClapTrap::getEnergypoints(void) const
{
    return (this->_energyPoints);
}

int    ClapTrap::getHitpoints(void) const
{
    return (this->_hitpoints);
}

std::string    ClapTrap::getName(void) const
{
    return (this->_name);
}

int             ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

void            ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void            ClapTrap::setHitpoints(unsigned int points)
{
    this->_hitpoints = points;
}

void            ClapTrap::setEnergypoints(int points)
{
    this->_energyPoints = points;
}

void            ClapTrap::setAttackDamage(int damage)
{
    this->_attackDamage = damage;
}
