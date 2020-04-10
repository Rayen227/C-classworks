#include <iostream>
using namespace std;
class Car;

class Boat{
private:
    int weight;
public:
    Boat(int wei): weight(wei){}
    friend int getTotalWeight(const Boat& a, const Car& b);
};

class Car{
private:
    int weight;
public:
    Car(int wei): weight(wei){}
    friend int getTotalWeight(const Boat& a, const Car& b);
};

int getTotalWeight(const Boat& a, const Car& b){
    return a.weight+b.weight;
}

int main(){

    Boat a(45);
    Car b(55);

    cout<<getTotalWeight(a, b)<<endl;

    system("pause");
    return 0;
}