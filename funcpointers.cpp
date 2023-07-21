#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
	return a+b;
}
int main(){
int (*p)(int,int);
p=add;
int c=p(10,290);
cout<<c<<endl;
}