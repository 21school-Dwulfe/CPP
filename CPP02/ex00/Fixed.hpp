#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
    int _fixedPointNum;
    static const int bits = 8;
    public:
        Fixed();
        Fixed(Fixed& copy);
        ~Fixed();
        Fixed& operator= (const Fixed& str);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
