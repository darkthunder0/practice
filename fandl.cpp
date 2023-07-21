#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int > nums{5,7,7,8,8,10};
	int target =8;
	   int low=0,high=nums.size()-1;
 
    int result=-1;
  vector<int> ans;
    while(low<=high){
    int mid=(low+high)/2;
        if(target==nums[mid]){
            result=mid;
            low=mid+1;
        }else if(nums[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
   cout<< result;
    }