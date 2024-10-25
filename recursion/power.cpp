#include<iostream>
using namespace std;
int power(int n){
    if(n==0)
    return 1;

    //int pow=power(n-1);
   // int result=2*pow;
   //simple asse likhe
    return 2*power(n-1);
    
}


int main(){
int n;
cin>>n;

int ans=power(n);
cout<<ans;


}