#include "class.cpp"

using namespace std;
class Student;

int Student::test=1;
int main(){

    Student a("A", 2, 5), b("b");
    Student c=a;

    a.putOut();
    reset(a);
    a.putOut();
    cout<<a.getTest()<<endl;


    system("pause");
    return 0;
}