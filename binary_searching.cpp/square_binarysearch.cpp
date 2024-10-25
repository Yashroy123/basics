 #include<iostream>
 using namespace std;


 int binarysearch(int n){
     int s=0;
   int e=n;
     int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square>n){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
 }


 int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    cout<<binarysearch( n)<<endl;
 }