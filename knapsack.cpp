#include<bits/stdc++.h>
using namespace std;
int dp[10][10];
int knapsack(int wt[],int val[],int cap,int i){
	if(cap==0 || i==5){
		return 0;
	}
if(dp[cap][i]!=0){
	return dp[cap][i];
}
	int inc=0,exc=0;
	if(cap>=wt[i]){
inc=val[i]+knapsack(wt,val,cap-wt[i],i+1);
	}
	exc=knapsack(wt,val,cap,i+1);
	return dp[cap][i]=max(inc,exc);
}
int main(){
	int cost[5]={1,4,2,3,6};
	int val[5]={1,1,7,9,1};
	int cap=8;
cout<<	knapsack(cost,val,cap,0);
}