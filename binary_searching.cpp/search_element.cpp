#include <iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>& nums,int target){
    int n=nums.size();
    int s=0;
    int e=n-1;
    while(s<=e){
         int mid=s+e/2;
        if(nums[mid]==target)
        return mid;
        else if(target>nums[mid])
        s=mid+1;
        else
        e=mid-1;
    }
    return -1;
}

int main() {
vector<int> a={2,3,4,5,6};
int target=4;
int ind=binary_search(a,target);
if(ind==-1)
cout<<"target is not present"<<endl;
else
cout<<"target is at index "<<ind<<endl;;

    return 0;







}