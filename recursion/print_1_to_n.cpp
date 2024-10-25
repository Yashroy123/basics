//print 1 to n
#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n)
    return;
    print(i+1,n);

    cout<<i<<endl;
    //print(i+1,n);
    
}
void p_print(){
    int cnt=0;
    if(cnt==3)return;

    cout<<cnt;
    cnt++
}

int main(){
    int n;
    cin>>n;
    print(1,n);
    p_print

}