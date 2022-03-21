#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    _type = "Wrong Cat";
    std::cout << "Default Constructor Wrong Cat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongAnimal):WrongAnimal()
{
    *this = wrongAnimal;
    std::cout << "Wrong Cat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Default destructor Wrong Cat called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong Cat sound" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
    if (this != &wrongCat)
        this->_type = wrongCat._type;
    return (*this);
}

std::string    WrongCat::getType() const
{
    return (_type);
}
