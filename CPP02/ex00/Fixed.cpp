#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointNum(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this  != &fixed)
    {
        this->_fixedPointNum = fixed.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointNum = raw;
}
