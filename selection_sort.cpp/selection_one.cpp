#include<iostream>
using namespace std;

// int selectionsort(int arr[],int n){
    


//     for( int i=0;i<n-1;i++){
//          int minindex=i;

//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minindex]){

//             minindex=j;
//             }
            
//         }
//         swap( arr[i],arr[minindex]);
//     }
//      for(int i=0;i<=5;i++){
//         cout<<arr[i]<<" "<<endl;
// }
// }


//  int main(){
//     int arr[5]={64,25,12,22,11};
//     // int n = sizeof(arr)/sizeof(arr[0]);

//     selectionsort(arr,5);

    
     
//  }

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
           if(arr[j]<arr[min]){
            min=j;
           }
           
        }
           int temp=arr[min];
           arr[min]=arr[i];
           arr[i]=temp;


    }
       for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    
  
}

int main(){
    // int n;
    // cin>>n;

    // int arr[n];

    // for(int i=0;i<=n;i++) cin>>arr[i];

    int arr[5]={45,54,23,53,34};

    selection_sort(arr,5);
   


}