#include <iostream>
using namespace std;

int main(){
    int n=6;

    if (n==5){
        cout<<n;
    }
    else if(n==0){
        cout<<n;
    }else{
        --n;
        cout<<n;
    }


    while(n!=10){
        n++;
        cout<<n;
    
    }


    for (int a=0;a!=5;a++){
        cout<<a;
    }

    string q[]={"a","s","d","f","g","h","j","k","l"};
    string s="qwertyuiop";
    for (string i:q){
        cout<<i;
    }
    
    for(int i=0;i!=s.length();i++){
        cout<<s[i]<<"\n";
    }
}



