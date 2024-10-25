#include<iostream>
using namespace std;

// void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
// int i=0;
// int j=0;
// int k=0;
// while(i<n && j<m){
//     if(arr1[i]<arr2[j]){
//     arr3[k++]=arr1[i++];
   
//     }
//     else{
//         arr3[k++]=arr2[j++];
       
//     }
// }
// while (i<n)
// {
//     arr3[k++]=arr1[i++];
   
// }
// while (j<m)
// {
//     arr3[k++]=arr1[j++];
   
//     /* code */
// }



//}
// void print(int ans[],int n){
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }cout<<endl;
// }


void sum(string& name){
   name[0]='m';
   cout<<name<<endl;

}


int main(){
    // int arr1[3]={1,3,6};
    // int arr2[2]={2,5};
    // int arr3[5]={};
    // merge(arr1,3,arr2,2,arr3);
    // print(arr3,5);
    // return 0;

    //implimantation of 2d arrar

    // int arr[3][5]={0};

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // }
   string name;
   cin>>name;
    sum(name);
    cout<<name;


}


