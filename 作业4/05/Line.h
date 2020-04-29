#include "Point.h"
#ifndef Line_H_
#define Line_H_
class Line
{
private:
    Point a, b;

public:
    Line(Point aa, Point bb) : a(aa), b(bb) {}
    friend float angle(Line &line1, Line &line2);
};
#endif
