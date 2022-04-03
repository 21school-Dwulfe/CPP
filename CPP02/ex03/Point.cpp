#include "Point.hpp"

Point::Point(void) : _x(new Fixed(0)), _y(new Fixed(0)){}

Point::Point(const float x, const float y) : _x(new Fixed(x)), _y(new Fixed(y)){}


Point::Point(const Point& point): _x(new Fixed(*point._x)), _y(new Fixed(*point._y))
{
    
}

Point& Point::operator=(const Point& point) 
{
    
    return (*this);
}

Point::~Point()
{
    delete _x;
    delete _y;
}

Fixed  const &Point::getX() const
{
    return (*_x);
}

Fixed  const &Point::getY() const
{
    return (*_y);
}