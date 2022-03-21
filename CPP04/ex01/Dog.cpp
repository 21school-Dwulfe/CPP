#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& dog): Animal()
{
    this->_brain = NULL;
    *this = dog;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator= (const Dog &dog)
{
    if (this != &dog)
    {
        this->_type = dog._type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*dog.getBrain());
    }
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType() const
{
    return (_type);
}

Brain* Dog::getBrain() const
{
    return (this->_brain);
}

void    Dog::setBrain(Brain& brain)
{
    this->_brain = &brain;
}


void    Dog::makeSound() const
{
    std::cout << "Gav Gav Gav" << std::endl;
}
