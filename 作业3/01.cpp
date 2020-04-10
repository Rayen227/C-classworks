#include <iostream>
using namespace std;

class Cat{
public:
    static int numOfCats;
    static int getNumOfCats(){ return numOfCats; }
};

int Cat::numOfCats=6;

int main(){

    Cat a;
    cout<<a.getNumOfCats()<<endl;

    system("pause");
    return 0;
}