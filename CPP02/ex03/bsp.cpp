#include "Point.hpp"


static  float direction(Point p1, Point p2, Point p3)
{

}

bool    bsp(Point const a, Point const b, const Point c, Point const point)
{
    float d1, d2, d3;

    d1 = direction(point, a, b);
    d2 = direction(point, b, c);
    d3 = direction(point, c, a);
}
