
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
int n,aa,b;
cin>>n>>aa>>b;
int m=max(n,max(aa,b));
 int nnn=min(n,min(aa,b));
     if(m!=n && nnn!=n ){
cout<<n<<endl;
}else if(m!=aa && nnn!=aa ){
cout<<aa<<endl;
}else {
cout<<b<<endl;
}
}
}