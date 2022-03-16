#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
    int _fixedPointNum;
    static const int bits = 8;
    public:
        Fixed();
        Fixed(const int num); 
        Fixed(const float num);
        Fixed(Fixed& copy);
        ~Fixed();
        Fixed& operator= (const Fixed& str);
        float toFloat(void) const;
        int toInt()const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream &operator<< (std::ostream &out,const Fixed& fixed);

#endif
