#include<iostream>
using namespace std;

int bubblesort(int arr[],int n){
for(int i=1;i<n;i++){

    for( int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j+1],arr[j]);
        }
    }
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}


}

int main(){
    int arr[5]={5,3,7,2,8};

    bubblesort(arr,5);

   
    

    return 0;
}