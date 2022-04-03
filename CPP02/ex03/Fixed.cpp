#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _fixedPointNum(0){}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::Fixed(const int num)
{
    _fixedPointNum = num << bits;
}

Fixed::Fixed(const float num):_fixedPointNum(roundf(num * (1 << bits))){}

Fixed::~Fixed(){}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    if (this  != &fixed)
    {
        this->_fixedPointNum = fixed.getRawBits();
    }
    return (*this);
}

Fixed  Fixed::operator- (const Fixed& fixed) const
{
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed  Fixed::operator+ (const Fixed& fixed) const
{
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed  Fixed::operator* (const Fixed& fixed) const
{
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed  Fixed::operator/ (const Fixed& fixed) const
{
    return Fixed(this->toFloat() / fixed.toFloat());
}

/**
 * @brief Prefix increment
 * 
 * @return Fixed& 
 */
Fixed&   Fixed::operator++(void) 
{
    this->_fixedPointNum++;
    return (*this);
}

/**
 * @brief Postfix increment
 * 
 * @return Fixed 
 */
Fixed   Fixed::operator++(int) 
{
    Fixed tmp = *this;
    operator++();
    return (tmp);
}

/**
 * @brief Prefix decrement
 * 
 * @return Fixed& 
 */
Fixed&   Fixed::operator--(void) 
{
    this->_fixedPointNum--;
    return (*this);
}

/**
 * @brief Postfix decrement
 * 
 * @return Fixed 
 */
Fixed   Fixed::operator--(int) 
{
    Fixed tmp = *this;
    operator--();
    return (tmp);
}


bool    Fixed::operator> (const Fixed& fixed) const
{
    return (this->_fixedPointNum > fixed._fixedPointNum);
}

bool    Fixed::operator< (const Fixed& fixed) const
{
    return (this->_fixedPointNum < fixed._fixedPointNum);
}

bool    Fixed::operator >= (const Fixed& fixed) const
{
    return (this->_fixedPointNum >= fixed._fixedPointNum);
}

bool    Fixed::operator <= (const Fixed& fixed) const
{
    return (this->_fixedPointNum <= fixed._fixedPointNum);
}

bool    Fixed::operator == (const Fixed& fixed) const
{
    return (this->_fixedPointNum == fixed._fixedPointNum);
}

float   Fixed::toFloat(void) const
{
    return ((float)_fixedPointNum / (1 << bits));
}

int Fixed::toInt(void)
{
    return (_fixedPointNum >> bits);
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointNum = raw;
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two)
{
    return (one < two ? one : two);
}

Fixed& Fixed::min (Fixed& one, Fixed& two)
{
    return (one < two ? one : two);
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two)
{
    return (one > two ? one : two);
}

Fixed& Fixed::max (Fixed& one, Fixed& two)
{
    return (one > two ? one : two);
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}
