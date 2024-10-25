#include<iostream>
using namespace std;

int evenodd(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}



int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    
    cout<<evenodd(n);
}