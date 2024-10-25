#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    int copy=n;

    int reverse_no=0;

    while(n>0){
        int id=n%10;
        reverse_no=(reverse_no*10)+id;
        n=n/10;
    }
    cout<< reverse_no<<endl;

    if(reverse_no==copy){
        cout<<" yes it is palindrome no";
    }
    else{
        cout<<"not palindrome no";
    }
}