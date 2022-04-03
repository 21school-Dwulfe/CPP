#include "Point.hpp"


static  float direction(Point p1, Point p2, Point p3)
{
    float dir;

    dir = (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat()) 
        - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
    return (dir);
}

bool    bsp(Point const a, Point const b, const Point c, Point const point)
{
    float d1, d2, d3;

    d1 = direction(point, a, b);
    d2 = direction(point, b, c);
    d3 = direction(point, c, a);

    return ((d1 <= 0 && d2 <= 0 && d3 <= 0) || (d1 >= 0 && d2 >= 0 && d3 >= 0));
}
