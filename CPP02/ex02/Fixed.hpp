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
        Fixed(const Fixed& copy);
        ~Fixed();
        Fixed& operator= (const Fixed& fixed);
        Fixed operator- (const Fixed& fixed)const;
        Fixed operator+ (const Fixed& fixed)const;
        Fixed operator* (const Fixed& fixed)const;
        Fixed operator/ (const Fixed& fixed)const;
        Fixed &operator++ (void);
        Fixed &operator-- (void);
        Fixed operator++(int);
        Fixed operator--(int);
        bool operator> (const Fixed& fixed) const;
        bool operator< (const Fixed& fixed) const;
        bool operator>= (const Fixed& fixed) const;
        bool operator<= (const Fixed& fixed) const;
        bool operator== (const Fixed& fixed) const;
        float toFloat(void) const;
        int toInt();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        const static Fixed& min (const Fixed &one, const Fixed &two);
        static Fixed& min(Fixed &one, Fixed &two);
        const static Fixed& max(const Fixed &one, const Fixed& two);
        static Fixed& max(Fixed &one, Fixed &two);
};

std::ostream &operator<< (std::ostream &out,const Fixed& fixed);

#endif
