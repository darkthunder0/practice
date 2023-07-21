#include<bits/stdc++.h>
using namespace std;
solve(vector<int> & arr,int i,int j){
	if(i+1==j){
		return 0;
	}
	int ans=INT_MAX;
	for(int k=i+1;k<j;k++){
int f=solve(arr,i,k);
int s=solve(arr,k,j);
int l=arr[i]*arr[k]*arr[j];
ans=min({f+s+l,ans});
	}

	return ans;
}
solvebu(vector<int>& arr){
vector<vector<int>> dp(arr.size(),vector<int> (arr.size()));
for(int slide=2;slide<dp.size();slide++){
	for(int j=slide;j<dp.size();j++){
		int i=j-slide;
		int ans=INT_MAX;
		for(int k=i+1;k<j;k++){
			int f=dp[i][k];
			int s=dp[k][j];
			int self=arr[i]*arr[j]*arr[k];
			ans=min(ans,f+s+self);
		}
		dp[i][j]=ans;
	}
}
for(int i=0;i<dp.size();i++){
	for(int j=0;j<dp.size();j++){
		cout<<dp[i][j]<<" ";
	}
	cout<<endl;
}
return dp[0][dp.size()-1];
}
int main(){
	vector<int> arr={4,2,3,5,1};
	cout<<solve(arr,0,arr.size()-1);
	solvebu(arr);
}