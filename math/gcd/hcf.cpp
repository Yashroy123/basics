//gcd and hcf
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;

    // for(int i=min(n1,n2);i>=1;i++){
    //     if((n1%i)==0 && (n2%i)==0){
    //         cout<<i;
    //         break;
    //     }
    // }

    while(n1>0 && n2>0){
        if(n1>n1) n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0) return n2;
    return n1;
}

