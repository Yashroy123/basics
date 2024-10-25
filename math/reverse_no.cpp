#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int reverse_no=0;

    while(n>0){
        int id=n%10;

        reverse_no=(reverse_no*10)+id;

        n=n/10;
       

    }
        cout<<reverse_no;

    
}