#include<iostream>
using namespace std;

void reverse(int arr[], int size){
 int s=0;
int e=size-1;

while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
}


}
 void printarray(int arr[], int size){
    for( int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }




int main(){
    int arr[4]={2,3,4,5};

    reverse(arr,4);
    printarray(arr,4);

    return 0;
}