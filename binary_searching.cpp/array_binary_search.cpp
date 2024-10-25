#include<iostream>
using namespace std;

int binarysearch( int arr[],int size,int key){
int start=0;
int end=size-1;
int mid= start+(end-start)/2;

while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return -1;
}

int main(){
    int even[6]={2,4,6,12,24,25};
    int odd[5]={1,3,5,6,8};

    int evenindex=binarysearch(even,6,25);
     int oddindex=binarysearch(odd,5,6);
    cout<<"index of 25 is :"<<evenindex<<endl;
    cout<<"index of 6 is :"<<oddindex<<endl;
}

