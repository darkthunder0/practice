#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
map<T,map<T,int>> l;
public:
void addedge(T x,T y,bool isbidir,int wt){
l[x].insert(make_pair(y,wt));
if(isbidir)l[y].insert(make_pair(x,wt));
}
bool containedge(T x,T y){
 auto it=l.find(x);
 if(it!=l.end()){
    auto it2=it->second.find(y);
     // or auto map<T,T>::iterator 
      if(it2!=it->second.end()){
      	return true;
      }else{
      	return false;
      }
 }
}
bool containvertex(T x){
auto  it=l.find(x);
	if(it!=l.end()){
		return true;
	}else{
		return false;
	}
}
int noofedge(){
	int sum=0;
// 	for(auto key:l){
//        auto it=l.find(key.first);
// if(it!=l.end()){
// 	auto it2=it->second;
// 	sum+=it->second.size();
for(auto key:l){
	sum+=key.second.size();
	}
	return sum/2;
}
void removeedge(string y,string x){
	if(containedge(x,y)){
		l[x].erase(y);
		l[y].erase(x);
	}
}
void removevertex(string v1){
	 for (auto it=l.begin(); it!=l.end(); ++it){
		auto it2=it->second.find(v1);
		if(it2!=it->second.end()){
			it->second.erase(it2);
		}
}
   l.erase(v1);
}

bool bfs(T src,T dis){
cout<<"bfs-> ";
	queue<T> q;
	set<T> st;
	q.push(src);
	while(!q.empty()){
       T node=q.front();q.pop();
       cout<<node<<" ";
       if(st.count(node)){
continue;
       }
       st.insert(node);
       
       if(node==dis)return true;
       for(auto nbrs:l[node]){
       	// cout<<"nbrs "<<nbrs.first<<endl;
       	if(!st.count(nbrs.first)){
       		// cout<<nbrs.first<<" ";
       		q.push(nbrs.first);
       		// st.insert(nbrs.first);
       	}
       }
       // cout<<endl;
	}
cout<<endl;
	return false;
}
bool dfs(T src,T dis){
	stack<T> s;
	set<T> st;
	cout<<"dfs-> ";
	s.push(src);
	while(!s.empty()){
       T node=s.top();s.pop();
       
       if(st.count(node)){
continue;
       }
       st.insert(node);
       if(node==dis)return true;
         cout<<node<<" ";
       for(auto nbrs:l[node]){
       	if(!st.count(nbrs.first)){
       		// cout<<nbrs.first<<" ";
       		s.push(nbrs.first);
       		// st.insert(nbrs.first);
       	}
       }
	}
	return false;
}
void bft(){
		queue<T> q;
	set<T> st;
	cout<<"bft-> ";
	for(auto x:l){
		// cout<<x.first<<" ";
		if(st.count(x.first)){
			continue;
		}
		q.push(x.first);
	while(!q.empty()){
       T node=q.front();q.pop();
       // cout<<node<<" ";
       if(st.count(node)){
continue;
       }
       st.insert(node);
       cout<<node<<" ";
       for(auto nbrs:l[node]){
       	// cout<<nbrs.first<<"-> "<<nbrs.second<<" "<<endl;
       	if(!st.count(nbrs.first)){
       		// cout<<nbrs.first<<" ";
       		q.push(nbrs.first);
       		// st.insert(nbrs.first);
       	}
       }
       // cout<<endl;

// 	return false;
}
}
cout<<endl;
}
void countcycle(){
		queue<T> q;
	set<T> st;
	T cycle=0;
	for(auto x:l){
		// cout<<x.first<<" ";
		if(st.count(x.first)){
			continue;
		}
		q.push(x.first);
	while(!q.empty()){
       T node=q.front();q.pop();
     
       st.insert(node);
       
       for(auto nbrs:l[node]){
       	if(!st.count(nbrs.first)){
       	// cout<<nbrs.first<<" ";
       		q.push(nbrs.first);
       		// st.insert(nbrs.first);
       	}
       }
       // cout<<endl;

// 	return false;
}
}
cout<<"No.of cycle :"<<cycle<<endl;
cout<<endl;
}
bool isconnected(){
	queue<T> q;
	set<T> st;
	T connected=0;
	for(auto x:l){
		// cout<<x.first<<" ";
		if(st.count(x.first)){
			continue;
		}
		connected++;
		q.push(x.first);
	while(!q.empty()){
       T node=q.front();q.pop();
       // cout<<node<<" ";
       if(st.count(node)){
       
continue;
       }
       st.insert(node);
       // cout<<node<<" ";
       for(auto nbrs:l[node]){
       	if(!st.count(nbrs.first)){
       		// cout<<nbrs.first<<" ";
       		q.push(nbrs.first);
       		// st.insert(nbrs.first);
       	}
       }
      
// 	return false;
}
}
 // cout<<"connected" <<connected<<endl;
return connected==1;
}
void dft(){
		stack<T> q;
	set<T> st;
	cout<<"dft-> ";
	for(auto x:l){
		// cout<<x.first<<" ";
		if(st.count(x.first)){
			continue;
		}
		q.push(x.first);
	while(!q.empty()){
       T node=q.top();q.pop();
       // cout<<node<<" ";
       if(st.count(node)){
continue;
       }
       st.insert(node);
       cout<<node<<" ";
       for(auto nbrs:l[node]){
       	if(!st.count(nbrs.first)){
       		// cout<<nbrs.first<<" ";
       		q.push(nbrs.first);
       		// st.insert(nbrs.first);
       	}
       }
       // cout<<endl;

// 	return false;
}
}
cout<<endl;
}
void print(){
	for(auto s : l){
		T src=s.first;
		map<T,int> sec=s.second;
		cout<<src<<"-> ";
		for(auto ss:sec){
			T des=ss.first;
			int weight=ss.second;
			cout<<des<<" "<<weight<<"|";
		}
		cout<<endl;
	}
}

};
int main(){
graph<int> v;
// v.addedge("A","B",true,20);
// v.addedge("A","D",true,50);
// v.addedge("A","C",true,10);
// v.addedge("C","D",true,40);
// v.addedge("D","B",true,30);
// v.addedge("B","C",true,50);
// v.removeedge("A","B");
// v.removevertex("A");
v.addedge(1,2,true,20);
v.addedge(1,4,true,50);
v.addedge(2,3,true,10);
v.addedge(3,4,true,40);
v.addedge(4,5,true,30);
v.addedge(5,6,true,50);
v.addedge(5,7,true,20);
v.addedge(6,7,true,50);
// v.addedge("A","C",true,10);
// v.addedge("C","D",true,40);
// v.addedge("D","B",true,30);
// v.addedge("B","C",true,50);
cout<<"contain edge:  "<<v.containedge(1,2)<<endl;
cout<<"contain vertex:  "<<v.containvertex(1)<<endl;
cout<<"NO of edge:  "<<v.noofedge()<<endl;

v.print();  
cout<<"bfs: "<< v.bfs(1,6)<<endl;
cout<<"dfs: "<<v.dfs(1,9)<<endl;
v.bft();
v.dft();
v.countcycle();
cout<<"connected->"<<v.isconnected();
}
// Another way of simply telling if an element exists is to check the count()

// if (myset.count(x)) {
//    // x is in the set, count is 1
// } else {
//    // count zero, i.e. x not in the set
// }
// Most of the times, however, I find myself needing access to the element wherever I check for its existence.

// So I'd have to find the iterator anyway. Then, of course, it's better to simply compare it to end too.

// set< X >::iterator it = myset.find(x);
// if (it != myset.end()) {
//    // do something with *it
// }