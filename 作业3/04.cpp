#include <iostream>
#include <cmath>
using namespace std;

bool prime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0)
            return false;
    }
    return true;
}

void gotbaha(int n){
    for(int i=3; i<n; i++){
        for(int j=3; j<n; j++){
            if(prime(i)&&prime(j)&&n==i+j){
                cout<<n<<'='<<i<<'+'<<j<<endl;
            }
        }
    }
}

int main(){

    gotbaha(66);

    system("pause");
    return 0;
}