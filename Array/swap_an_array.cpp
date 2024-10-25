//wap an array to arr[8]={4,6,8,2,10,1,0,3} to arr[8]={6,4,2,8,1,10,3,0}

#include<iostream>
using namespace std;

int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int swapAnarray(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
            
        
    }
}


int main(){
 int arr[8]={4,6,8,2,10,1,0,3};

 swapAnarray(arr,8);
 print(arr,8);

}