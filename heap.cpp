#include<bits/stdc++.h>
using namespace std;
int* add(int *x,int *y){
	// int *c=new int();
	int c=*x+*y;
	// cout<<&c<<endl;//where situated
	// cout<<c<<endl;//pointing where
	return &c;
}
int main(){
	int a=10,b=20;
	int *z=add(&a,&b);
	// cout<<&z<<endl;
	cout<<(*z)<<endl;
	// int *p=new int();
	// int* pp=new int[5];
	// *pp=20;
	// *(pp+1)=10;
	// cout<<*pp<<" "<<*(pp+1);
	// *p=10;
	// // cout<<p<<endl;
	// delete(p);  //98090
	// cout<<*p<<endl;
}