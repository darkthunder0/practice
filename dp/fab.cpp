#include<bits/stdc++.h>
using namespace std;
//top down
int fab(int n,vector<int> &arr){
	if(n==0||n==1)return n;
	if(arr[n]!=0)return arr[n];
	// =fab(n-1,arr)+fab(n-2,arr);
	int f1=fab(n-1,arr);
	int f2=fab(n-2,arr);
	return arr[n]=f1+f2;
}
//bottom up
int fab(int n){
vector<int> dp(n+1);
dp[0]=0;
dp[1]=1;
for(int i=2;i<dp.size();i++){
	dp[i]=dp[i-1]+dp[i-2];
}
return dp[n];
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n+1);
	// cout<<arr[3];
	// cout<<fab(n,arr);
	cout<<fab(n);
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// }

}