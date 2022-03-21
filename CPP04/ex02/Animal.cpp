#include "Animal.hpp"

AAnimal::AAnimal(void): _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
    if (this != &animal)
        this->_type = animal._type;
    return (*this);
}

void    AAnimal::makeSound() const
{
    std::cout << "Make some noise!" << std::endl;
}

std::string    AAnimal::getType() const
{
    return (_type);
}