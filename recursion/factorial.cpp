#include<iostream>
using namespace std;
// generally factorial(n)=n*n-1;hota hai 
//suppose 5!=5*5-1;


int factorial(int n){
    if(n==0)
    return 1;

    // int fact=factorial(n-1);
    // int result=n*fact;

    // return result;
    return n*factorial(n-1);
}

int main(){

int n;
cin>>n;

 
 int ans=factorial(n);

 cout<<ans;

 return 0;
}