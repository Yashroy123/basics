#include<iostream>
using namespace std;

int recrs(int n){
    if(n<=1)
    return n;

    return n+recrs(n-1);
}

int main(){
    int n=5;
    cout<<recrs(n)<<endl;
}