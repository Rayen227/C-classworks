#include <iostream>
using namespace std;

class Point{
public:
    int x,y;
    Point(int _x, int _y): x(_x), y(_y){}
    Point(): x(0), y(0){}
};

class CRect{
private:
    Point tl, dr;
public:
    CRect(Point _tl, Point _dr): tl(_tl), dr(_dr){}
    CRect(): tl(-1,1), dr(1,-1){}
    int RectHeight();
    int RectWidth();
    int getArea();
};

int CRect::RectHeight(){
    int res=tl.y-dr.y;
    return res>0?res:res*(-1);
}
int CRect::RectWidth(){
    int res=tl.x-dr.x;
    return res>0?res:res*(-1);
}

int CRect::getArea(){
    int a=RectWidth(), b=RectHeight();
    return a*b;
}


int main(){

    Point a(1, 2), b(4, 6);
    CRect c(a, b);

    cout<<c.RectHeight()<<' '<<c.RectWidth()<<endl;//期望：4 3

    cout<<c.getArea()<<endl;//期望：12


    system("pause");
    return 0;
}