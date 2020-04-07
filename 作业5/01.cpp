#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	void setInfo(int, string, int);
	void printInfo();
private:
	int _number;
	string _name;
	int _age;
};

void Student::setInfo(int number, string name, int age) {
	_number = number;
	_name = name;
	_age = age;
}

void Student::printInfo() {
	cout << _number << ' ' << _name << ' ' << _age << endl;
}

int main() {

	Student test;

	test.setInfo(12345, "ÕÅÈý", 35);
	test.printInfo();

	system("pause");
	return 0;
}