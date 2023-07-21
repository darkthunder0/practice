#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
class prims{
map<int,map<int,int>> l;
public:
void addEdge(int x,int y,int wt){
l[x].insert(make_pair(y,wt));
l[y].insert(make_pair(x,wt));
}
void dijalgo(int V){
	int ans=0;
	priority_queue<iPair,vector<iPair>,greater<iPair>> pq;
	// sort(pq.begin(),pq.end());
	set<int> visited;
	vector<string> parent;
	string anss;
	// vector<int> key(V,10000);
	vector<int> dist(V,1000);
int src=0;
	// primspair p({1,1,0});
	pq.push(make_pair(0,src));
	dist[src]=0;
while(!pq.empty()){
int node=pq.top().second;
pq.pop();
if(visited.count(node)){
	continue;
}
anss+=to_string(node);
visited.insert(node);
// cout<<node<<" ";

for(auto nbrs:l[node]){
		int v = nbrs.first;
			int weight = nbrs.second;	
			int oldcost=dist[nbrs.first];
			int newcost=dist[node]+weight;
if(!visited.count(nbrs.first) && oldcost>newcost){
	// primspair np(nbrs.first,node,nbrs.second);
dist[v]=newcost;
// anss+=to_string(v);
// cout<<anss<<" "<<endl;
pq.push(make_pair(dist[v],v));
	// key[v]=nbrs.second;//wt
	// pq.push(make_pair(key[v],nbrs.first));//wt,node
// parent[v]=node;//via
}
}
}
// cout<<ans<<endl;
 for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
cout<<anss<<endl;

}
};
int main(){

	 prims g;
 
    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
 int V=9;
    g.dijalgo(V);
}