#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	int c=0;

	cin>>a>>b;
	 c=a+b;
	if(a+b==7|| c>7){
		c=7;
	}else if(a==b){
		c=a;
	}
	else if(c==3||c==5||c==6){
	c=c;
}else{
	c=a+b;
}
cout<<c<<endl;
}