#include "Convert.hpp"
#include <iostream>
#include <cstdlib>

Convert::Convert(std::string num): _number(num)
{
   
}

Convert::Convert(const Convert& copy)
{
    *this = copy;
}

Convert::~Convert(){}

Convert& Convert::operator=(const Convert& convert)
{
    if (this != &convert)
    {
        this->_number = convert._number;
    }
    return (*this);
}

std::string Convert::getNumber() const
{
    return (_number);
}

char Convert::toChar() const
{
    return (static_cast<char>(toFloat()));
}

int Convert::toInt() const
{
    return (static_cast<int>(toFloat()));
}

float Convert::toFloat() const
{
    return (std::atof(_number.c_str()));
}

double  Convert::toDouble() const
{
    return (std::strtod(_number.c_str(), 0));
}


