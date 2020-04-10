#include <iostream>
using namespace std;

class Student{
private:
    string name;
    double sco;
public:
    Student(string _name, double _sco): name(_name), sco(_sco){}
    friend Student cmp(const Student& a, const Student& b, int _mode);
    void putOut(){ cout<<"\tName: "<<name<<" Score: "<<sco<<endl; }
};

Student cmp(const Student& a, const Student& b, int _mode){
    return a.sco>b.sco&&!_mode||a.sco<b.sco&&_mode?a:b;
}

int main(){

    Student a("A", 99), b("B", 97), c("C", 98), tmp("", 0);
    
    cout<<"Highest:\n";
    tmp=cmp(a, b, 0);
    tmp=cmp(tmp, c, 0);
    tmp.putOut();
    cout<<"Lowest:\n";
    tmp=cmp(a, b, 1);
    tmp=cmp(tmp, c, 1);
    tmp.putOut();

    system("pause");
}