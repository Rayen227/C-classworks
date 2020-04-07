#include <iostream>
using namespace std;

class Complex{
private:
    float real, imaginary;
public:
    Complex() : real(0), imaginary(0){}
    Complex(float _real, float _imaginary) : real(_real), imaginary(_imaginary){}
    Complex(Complex& a) : real(a.real), imaginary(a.imaginary){}
    void putout();
    Complex add(const Complex& c);
    bool isEqual(const Complex& c);
};

void Complex::putout(){
    cout<<imaginary<<"i";
    if(real>=0) cout<<'+';
    cout<<real<<endl;
}

Complex Complex::add(const Complex& c){
    float aPlus, bPlus;
    aPlus=real+c.real;
    bPlus=imaginary+c.imaginary;
    Complex b(aPlus, bPlus);
    return b;
}

bool Complex::isEqual(const Complex& c){
    return real==c.real&&imaginary==c.imaginary?true:false;
}

int main(){
    Complex a(3,2), b(5, -4), c(3, 2), d;
   
    d=a.add(b);
    d.putout();//期望：-2i+8

    cout<<a.isEqual(b)<<' '<<a.isEqual(c)<<endl;//期望：0 1


    // Complex a,b; 正确

    // Complex c=a+b; 错误：Complex 没有 + 运算符

    // Complex d=a; 正确

    // Complex e; 正确

    // e=a; 正确


    system("pause");
    return 0;
}

