#include "head.h"
#include <iostream>
using namespace std;
class Student;

void Student::putOut(){
    cout<<name<<' '<<", class"<<cls<<", grade"<<grade<<endl;
}

void reset(Student& a){
    a.name="";
    a.grade=0;
    a.cls=0;
}

int Student::getTest(){ return test; }