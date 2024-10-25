#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]=key)
        return 1;
    }
    return 0;
}

int main(){
int arr[6]={4,7,5,9,2,10};

cout<<"Enter the key"<<endl;
int key;
cin>>key;

bool found=search(arr,6,key);

if(found){
    cout<<"Key is found"<<endl;
}
else{
    cout<<"Key is not found "<<endl;
}



}