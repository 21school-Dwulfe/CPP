#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _fixedPointNum(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int num)
{
    _fixedPointNum = num << bits;
    std::cout << "Int constructor is called" << std::endl;
}

Fixed::Fixed(const float num)
{
    _fixedPointNum = roundf(num * (1 << bits));
    std::cout << "Float constructor is called" << std::endl;
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

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}

float   Fixed::toFloat(void) const
{
    return ((float)_fixedPointNum / (1 << bits));
}

int Fixed::toInt(void) const
{
    return (_fixedPointNum >> bits);
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
