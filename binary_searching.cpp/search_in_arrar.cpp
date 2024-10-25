#include<iostream>
using namespace std;

int search(int arr[],int number){
    int cut=0;

    for(int i=0;i<number;i++){
        if(arr[i]==number)
        cut=cut+1;
    }
    return cut;
}

int main(){
    int array[5]={1,2,1,3,4};

    int result=search( array,1);
    cout<<result;
}


