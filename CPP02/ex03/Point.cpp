#include "Point.hpp"

Point::Point(void) : _x(new Fixed(0)), _y(new Fixed(0)){}

Point::Point(const Fixed* x, const Fixed* y) : _x(x), _y(y){}


Point::Point(const Point& point): _x(point._x), _y(point._y)
{
    
}

Point& Point::operator=(const Point& point) 
{
    
    return (*this);
}

Point::~Point()
{

}