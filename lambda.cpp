#include<bits/stdc++.h>
using namespace std;
int main(){
	// vector<int> v=
	// sort(v.begin(),v.end(),[](int &a,int &b){return a>b;});
	// for(auto x: v){
	// 	cout<<x<<" ";
	// }
	vector<int> nums={1,5,3,8,2,4,8};
	
        vector<int> prefix(n);
     
      prefix[0]=nums[0];
      for(int i=1;i<n;i++){
        prefix[i]=nums[i-1]+nums[i];
      }
      for(auto x:prefix){
        cout<<x<<" ";
      }
    }