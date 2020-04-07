#include <iostream>
#include <string>
using namespace std;

class Cdate{
public:
    int year, month, day;
    Cdate(int _yaer, int _month, int _day) : year(_yaer), month(_month), day(_day){}
    Cdate(Cdate& a): year(a.year), month(a.month), day(a.day) {}
    Cdate(){ year=1970; month=1; day=1; }
};

class Employee{
private:
    string name, street, city, province, pastalcode;
    Cdate birth;
public:
    Employee(string _name, string _street, string _city, string _province, string _pastalcode, Cdate _birth)
    : name(_name), street(_street), city(_city), province(_province), pastalcode(_pastalcode), birth(_birth){} 
    Employee() : name(""), street(""), city(""), province(""), pastalcode("") {} 
    void resetName(string _name){ name=_name; }
    void resetStreet(string _street){ street=_street; }
    void restPastalcode(string _pastalcode){ pastalcode=_pastalcode; }
    void putout(){
        cout<<name<<endl<<street<<' '<<city<<' '<<province<<' '<<pastalcode<<endl;
        cout<<"Birthday: "<<birth.year<<"-"<<birth.month<<"-"<<birth.day<<endl;
    }
};


int main(){

    Cdate birth(1949, 10, 10);

    Employee a("Chuan Jianguo", "Tian", "Beijing", "Beijing", "100000", birth);
    a.putout();
    cout<<endl;
    a.resetName("Chuan JIANGUO");
    a.resetStreet("???");
    a.restPastalcode("500000");
    a.putout();

    system("pause");
    return 0;
}
