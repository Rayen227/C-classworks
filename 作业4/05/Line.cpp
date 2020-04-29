#include "Line.h"
float angle(Line &line1, Line &line2)
{
    float a, b;
    a = dist(line1.a, line1.b);
    b = dist(line2.a, line2.b);
    return (a * a + b * b) / 2.0 * a * b;
}