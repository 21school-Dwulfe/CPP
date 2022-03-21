#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):_type("Wrong Animal")
{
    std::cout << "Default Constructor Wrong Animal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
    *this = wrongAnimal;
    std::cout << "Wrong Animal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default destructor Wrong Animal called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal sound" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
    if (this != &wrongAnimal)
        this->_type = wrongAnimal._type;
    return (*this);
}

std::string    WrongAnimal::getType() const
{
    return (_type);
}
