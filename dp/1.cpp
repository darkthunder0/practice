#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,n,ans;
cin>>n;
while(n--){
	cin>>a;
	int initial=1,final=0,result=0;
	for(int i=0;i<100;i++){
    final+=initial*10;
if(final>a){
	result+=a%10;
	break;
	}
	result+=9;
}
cout<<result+1<<endl;
}
}