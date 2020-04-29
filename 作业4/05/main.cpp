#include "Line.h"
#include "Point.h"
#include "Line.cpp"
#include "Point.cpp"
#include <iostream>
using namespace std;
int main()
{

    Point p1(2, 5), p2(3, 7), p3(4, 5), p4(8, 6);
    Line a(p1, p2), b(p3, p4);

    cout << angle(a, b) << endl;
    system("pause");

    return 0;
}
