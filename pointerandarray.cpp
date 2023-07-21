#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={2,4,5,8,1};
int *p=arr+1;
// cout<<*(arr+2)<<endl;
	*(arr+1)=100;
	for(int i=0;i<5;i++){
	cout<<&arr[i]<<endl;
	cout<<arr[i]<<endl;
    cout<<arr+i<<endl;

    // cout<<<<endl;
    cout<<endl;
}
}