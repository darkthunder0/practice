
#include<bits/stdc++.h>
using namespace std;

class graph{
	int V;
list<int> *l;
public:
graph(int v){
	 V=v;
		l=new list<int>[V];
}
void addedge(int x,int y){
l[x].push_back(y);
l[y].push_back(x);
}
void print(){
	for(int i=0;i<V;i++){
		cout<<"vertex  "<<i<<"-> ";
		for(int nbr:l[i]){
			cout<<nbr<<", ";
		}
		cout<<endl;
	}
}                       
};
int main(){
graph v(4);
v.addedge(0,1);
v.addedge(0,2);
v.addedge(2,3);
v.addedge(1,2);
v.print();
}


// l    
// 0->           |
// 1->           |
// 2->        array of V list 
// 3->           |










