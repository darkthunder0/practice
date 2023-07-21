#include<bits/stdc++.h>
using namespace std;
class Cube{
public:
	double getvolume(){
		return length*length;
	}
void setlength(int length_){
	length=length_;
}
private:
	double length;
};
// double Cube::getvolume(){
	
// }
// void Cube::setlength(int length_){
	
// }
int main(){
Cube C;
C.setlength(5.55);
cout<<C.getvolume();
// cout<<vol<<endl;
}