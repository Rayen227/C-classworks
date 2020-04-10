#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	float x, y;
public:
	Point() { x = 0; y = 0; }
	Point(float xx, float yy) { x = xx; y = yy; }

	float getX() { return x; };
	float getY() { return y; };

	float calculate_distance(Point& p1);
};

float Point::calculate_distance(Point& p1) {
	float x1 = p1.getX(), y1 = p1.getY();
	return sqrt(pow(x - x1, 2) + pow(y - y1, 2));
}


int main() {

	float x1, x2, y1, y2;
	cout << "分别输入两点坐标：\n> ";
	cin >> x1 >> y1 >> x2 >> y2;

	Point p1(x1, y1), p2(x2, y2);
	
	cout << "两点间距离：" << p1.calculate_distance(p2) << endl;

	system("pause");

	return 0;
}