// #include<bits/stdc++.h>
// using namespace std;
// void inc(int &x){
// 	x=x+1;
// 	cout<<" call"<<&x<<endl;
// 	// return *x;
// 	// return x;
// }
// int main(){
// 	int a=10;
// 	cout<<&a<<endl;
// 	inc(a);
// 	cout<<a<<endl;
// }                                  call by refrence
// and                                      
#include<bits/stdc++.h>
using namespace std;
void inc(int *x){
	*x=*x+1;
	cout<<" call"<<&x<<endl;
	// return *x;
	// return x;
}
int main(){
	int a=10;
	cout<<&a<<endl;
	inc(&a);
	cout<<a<<endl;
}
// or
// #include<bits/stdc++.h>
// using namespace std;
// void inc(int x){
// 	x=x+1;
// }
// int main(){               //call by value
// 	int a=10;
// 	inc(a);
// 	cout<<a<<endl;
// }