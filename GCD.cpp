#include <iostream>

using namespace std;

int main(){
    int i,n1,n2,gcd;

    cout<<"Enter the 1st no:";
    cin>>n1;

    cout<<"Enter the 2nd no:";
    cin>>n2;

    for(i=1;n1>=i&&n2>=i;i++){
        
        if (n1%i==0 && n2%i==0){
            gcd=i;
        }

        
    }

    cout<<gcd<<" is the GCD for "<<n1<<" & "<<n2;
}