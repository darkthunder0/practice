#include<bits/stdc++.h>
using namespace std;
void nextgreater(vector<int> arr,int n){
stack<int> stk;
for(int i=0;i<n;i++){
	if(stk.empty()){
		stk.push(arr[i]);
		continue;
	}
	while(!stk.empty() && stk.top()>arr[i]){
		cout<<stk.top()<<" ->"<<arr[i]<<endl;
		stk.pop();

	}
	stk.push(arr[i]);
}
while (!stk.empty()) {
        cout << stk.top() << " --> " << -1 << endl;
        stk.pop();
    }
}
void previousgreater(vector<int> arr,int n){
stack<int> stk;
stk.push(arr[0]);
cout<<arr[0]<< " -1 "<<endl;//first element previous greater always -1
for(int i=1;i<n;i++){
	while(!stk.empty() && stk.top()>arr[i])stk.pop();
	if(stk.empty())cout<<arr[i]<< " -1 "<<endl;
	else cout<<arr[i]<< " "<<stk.top()<<endl;
stk.push(arr[i]);
}	
}
int main(){
	vector<int> arr={3,7,8,4};
	int n=arr.size();
	nextgreater(arr,n);
	previousgreater(arr,n);
}