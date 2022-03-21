#include "Cat.hpp"

Cat::Cat(void)
{
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cat):Animal()
{
    *this = cat;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator= (const Cat &cat)
{
    if (this != &cat)
        this->_type = cat._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const
{
    return (_type);
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow Meow" << std::endl;
}
