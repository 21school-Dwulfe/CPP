#include "Cat.hpp"

Cat::Cat(void)
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cat):Animal()
{
    this->_brain = NULL;
    *this = cat;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator= (const Cat &cat)
{
    if (this != &cat)
    {
        this->_type = cat._type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*cat.getBrain());   
    }
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Brain* Cat::getBrain() const
{
    return (this->_brain);
}

void    Cat::setBrain(Brain& brain)
{
    this->_brain = &brain;
}

std::string Cat::getType() const
{
    return (_type);
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow Meow" << std::endl;
}
