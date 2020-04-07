#include <iostream>
#include <string>
using namespace std;

class Complex {
public:
	void set(float, float);
	void put();
	Complex const add(Complex& b);
	bool const isEqual(Complex& b);

private:
	float _real, _imaginary;
};

void Complex::set(float real, float imaginary) {
	_real = real;
	_imaginary = imaginary;
}

void Complex::put() {
	cout << _real << " + " << _imaginary << 'i' << endl;
}

Complex const Complex::add(Complex& b) {
	Complex c;
	c.set(_real+b._real, _imaginary+b._imaginary);

	return c;
}

bool const Complex::isEqual(Complex& b) {
	return _real == b._real && _imaginary == b._imaginary ? true : false;
}



int main() {

	Complex test1, test2;
	test1.set(5, 2.5);
	test2.set(6, 2.6);

	cout<<test1.isEqual(test2)<<endl;

	test1.put();
	test2.put();

	Complex test3 = test1.add(test2);
	test3.put();

	system("pause");
	return 0;
}