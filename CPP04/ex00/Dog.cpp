#include "Dog.hpp"

Dog::Dog(void)
{
    _type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& cat): Animal()
{
    *this = cat;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator= (const Dog &cat)
{
    if (this != &cat)
        this->_type = cat._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType() const
{
    return (_type);
}

void    Dog::makeSound() const
{
    std::cout << "Gav Gav Gav" << std::endl;
}
