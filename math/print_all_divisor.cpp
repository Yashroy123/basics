#include<iostream>
using namespace std;

int printdivisor(int x){
    for(int i=1;i<x;i++){
        if(x%i==0){
            cout<<i<<" ";
        }
    }
}
 



int main(){
    int n;
    cin>>n;

   cout<< printdivisor(n);
   return 0;
}