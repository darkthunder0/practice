#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums{2,2,3,3,5,15};
int ans=0;
for(int i=0;i<nums.size();i++){
	ans=ans^nums[i];
}
cout<<ans;
int mask=ans&(~(ans-1));
int b=0;
for(int i=0;i<nums.size();i++){
	if((nums[i]&mask)!=0){
		b=b^nums[i];
	}
}
int a=ans^b;

cout<<a<<" "<<b<<endl;
}