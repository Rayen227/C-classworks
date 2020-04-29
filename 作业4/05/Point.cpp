#include "Point.h"
#include <cmath>
int Point::getX() { return x; }
int Point::getY() { return y; }

float dist(Point &a, Point &b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}