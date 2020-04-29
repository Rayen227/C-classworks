#ifndef POINT_H_
#define POINT_H_
class Point
{
private:
    int x, y;

public:
    Point(int xx, int yy) : x(xx), y(yy){};
    int getX();
    int getY();
    friend float dist(Point &a, Point &b);
};
#endif
