#include "Animal.hpp"

Animal::Animal(void): _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
    if (this != &animal)
        this->_type = animal._type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Make some noise!" << std::endl;
}

std::string    Animal::getType() const
{
    return (_type);
}