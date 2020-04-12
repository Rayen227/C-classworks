#include <string>
using namespace std;
class Student{
private:
    string name;
    int grade, cls;
    static int test;
public:
    Student(string _name, int _grade, int _cls): name(_name), grade(_grade), cls(_cls){}
    Student(string _name): name(_name){}
    Student(Student& a): name(a.name), grade(a.grade), cls(a.cls){}
    void putOut();
    void friend reset(Student &a);
    static int getTest();
};

