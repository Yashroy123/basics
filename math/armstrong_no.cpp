// //armstrong number =273=>cube of 2+cube of 7+cube of 3=>is exactlt equal to the first mumber

 #include<iostream>
 using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     int sum=0;
//     int dup=n;

    

//     while(n>0){
//         int id=n%10;
//          sum=sum+(id*id*id);
//         n=n/10;
//     }
//     cout<<sum<<endl;
//     if(dup==sum){
//         cout<<"yes it is armstrong no";
//     }
//     else{
//         cout<<"no it is not armstrong no";
//     }



// }


 int print_amrstrong(int n){
    int dup=n;
    int id=0;
    

    while(n>0){
        int digit=n%10;
        id+=(digit*digit*digit);
        n=n/10;
    }
     if(dup==id)
      return 1;
     else
      return 0;

   
 }

 int main(){
    int number;
    cout<<"Enter your number:";
    cin>>number;
    int ans=print_amrstrong(number);
    cout<<ans;
 }