#include <iostream>
#include <string.h>
using namespace std;


char* encrypt(char* str){

    for(int i=0; str[i]!='\0'; i++){
        if(isupper(str[i])){
            str[i]+=str[i]>=87?-22:4;
        }
        if(islower(str[i])){
            str[i]+=str[i]>=119?-22:4;
        }
    }

    return str;
}

int main(){

    char str[100]="Wonderful!";
    cout<<encrypt(str)<<endl;

    system("pause");
    return 0;
}