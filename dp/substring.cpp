// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	string str="abcd";
// 	for(int i=0;i<str.length();i++){
// 		for(int j=0;j<=str.length()-i;j++){
// 		cout<<str.substr(i,j)<<endl;
// 	}
// }
// }
#include <iostream>
using namespace std;
void printsub(string ques,string ans){
    if(ques.length()==0){
        cout<<ans<<endl;
        return;
    }
    // char ch=ques.at(0);
    printsub(ques.substr(1),ans);
    printsub(ques.substr(1),ans+ques[0]);
}
int main() {
string ques="abc";
printsub(ques,"");
	return 0;
}