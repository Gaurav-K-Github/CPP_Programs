#include <iostream>
using namespace std;

int main(){
    int n=12345,n2=0;


    while(n>0){
        n2=(n2*10)+n%10;
        n=n/10;
    }

    cout<<n2<<" reversed!";   
}