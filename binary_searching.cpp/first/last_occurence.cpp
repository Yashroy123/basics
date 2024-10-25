#include<iostream>
using namespace std;

int firstoccurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
            e=mid-1;
        }
         else if(arr[mid]<key){
            
            s=mid+1;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastoccurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
             
            s=mid+1;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}



int main(){
    int arr[5]={1,3,3,4,5};

    cout<<"first index of 3:"<<firstoccurence(arr,4,3)<<endl;
    cout<<"second index of 3:"<<lastoccurence(arr,4,3)<<endl;

}