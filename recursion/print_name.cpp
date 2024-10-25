//print name n time using recurrsion
#include<iostream>
using namespace std;

void print(int i,int n)
{
    if(i>n)
    return;
    cout<<"yash"<<endl;
    print(i+1,n);
}

int main(){
int n;
cout<<"How many  times you want to print your name "<<endl;
cin>>n;

 print(1,n);




    
}