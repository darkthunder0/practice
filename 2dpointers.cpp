#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[2][3]={{2,3,6},{4,5,8}};
	int (*p)[3]=arr;
	cout<<arr<<" "<<*arr<<" "<<arr[0]<<" "<<&arr<<endl; //400 0x61fef4 0x61fef4 0x61fef4
	cout<<arr+1<<" "<<arr[1]<<endl;     //412
	cout<<*(arr+1)<<" "<<arr[1][0]<<endl;
	cout<<*(*arr+1)<<" "<<arr[1][2]<<endl; // 3  8
}