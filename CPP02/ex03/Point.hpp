#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed *_x;
    const Fixed *_y;
public:
    Point(void);
    Point(const float x, const float y);
    Point(const Point& point);
    ~Point();

    Point& operator=(const Point& point);
    Fixed  const &getX() const;
    Fixed  const &getY() const;
    // void    setX(const Fixed* newFixed);
    // void    setY(const Fixed* newFixed);
};

#endif
