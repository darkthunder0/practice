#include<bits/stdc++.h>
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main(){
	int t;cin>>t;
	while(t--){
		int a;
		cin>>a;
		for(int i=0;i<a;i++){
			cout<<i<<" ";
		}
	}
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int a;
// 		cin>>a;
// 		int counter=0;
// 	for(int i=1;i<=a;i++){
// 		for(int j=1;j<=a;j++){
// 			int val= lcm(i,j);
// 			int val2= gcd(i,j);
// if(val/val<=3){
// 	counter++;
// }
// 		}

// 	}
// 	cout<<counter<<endl;
// 	}
}