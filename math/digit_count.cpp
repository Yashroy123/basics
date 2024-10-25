#include<iostream>
using namespace std;

int countdigit(int x){
    int n=x;
    int count=0;
    while(x!=0){
      x=x/10;
      count++;
      

    }
    return count;

}



int main(){
    int n=123;
    
    

    cout<<countdigit(n);
    return 0;
}
