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

class primspair{
public:
	int vtx;
	int acq;
	int cost;

	primspair(int vtx,int b,int c){
		this->vtx=vtx;
		this->acq=b;
		this->cost=c;
	}

};

void primsalgo(int V){
	int ans=0;
	priority_queue<iPair,vector<iPair>,greater<iPair>> pq;
	// sort(pq.begin(),pq.end());
	set<int> visited;
	vector<int> key(V,10000);
	vector<int> parent(V,-1);
int src=0;
	// primspair p({1,1,0});
	pq.push(make_pair(0,src));
while(!pq.empty()){
int node=pq.top().second;
pq.pop();
if(visited.count(node)){
	continue;
}
visited.insert(node);
cout<<node<<" ";
// ans+=node.cost;
for(auto nbrs:l[node]){
		int v = nbrs.first;
			int weight = nbrs.second;	
if(!visited.count(nbrs.first)){
	// primspair np(nbrs.first,node,nbrs.second);
	key[v]=nbrs.second;//wt
	pq.push(make_pair(key[v],nbrs.first));//wt,node
parent[v]=node;//via
}
}
}
// cout<<ans<<endl;

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
    g.primsalgo(V);
}
// STL implementation of Prim's algorithm for MST
// #include<bits/stdc++.h>
// using namespace std;
// # define INF 0x3f3f3f3f

// // iPair ==> Integer Pair
// typedef pair<int, int> iPair;

// // To add an edge
// map<int,map<int,int>> adj;
// void addEdge( int u,int v, int wt)
// {
// 	adj[u].insert(make_pair(v, wt));
// 	adj[v].insert(make_pair(u, wt));
// }

// // Prints shortest paths from src to all other vertices
// void primMST( int V)
// {
// 	// Create a priority queue to store vertices that
// 	// are being primMST. This is weird syntax in C++.
// 	// Refer below link for details of this syntax
// 	// http://geeksquiz.com/implement-min-heap-using-stl/
// 	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;

// 	int src = 0; // Taking vertex 0 as source

// 	// Create a vector for keys and initialize all
// 	// keys as infinite (INF)
// 	vector<int> key(V, INF);

// 	// To store parent array which in turn store MST
// 	vector<int> parent(V, -1);

// 	// To keep track of vertices included in MST
// 	set<int> inMST;

// 	// Insert source itself in priority queue and initialize
// 	// its key as 0.
// 	pq.push(make_pair(0, src));
// 	key[src] = 0;

// 	/* Looping till priority queue becomes empty */
// 	while (!pq.empty())
// 	{
// 		// The first vertex in pair is the minimum key
// 		// vertex, extract it from priority queue.
// 		// vertex label is stored in second of pair (it
// 		// has to be done this way to keep the vertices
// 		// sorted key (key must be first item
// 		// in pair)
// 		int u = pq.top().second;
// 		pq.pop();

// 		//Different key values for same vertex may exist in the priority queue.
// 		//The one with the least key value is always processed first.
// 		//Therefore, ignore the rest.
// 		if(inMST.count(u)){
// 			continue;
// 		}
	
// 	inMST.insert(u);	 // Include vertex in MST

// 		// Traverse all adjacent of u
// 		for (auto x : adj[u])
// 		{
// 			// Get vertex label and weight of current adjacent
// 			// of u.
// 			int v = x.first;
// 			int weight = x.second;

// 			// If v is not in MST and weight of (u,v) is smaller
// 			// than current key of v
// 			if (!inMST.count(v)  && key[v] > weight)
// 			{
// 				// Updating key of v
// 				key[v] = weight;
// 				pq.push(make_pair(key[v], v));
// 				parent[v] = u;
// 			}
// 		}
// 	}

// 	// Print edges of MST using parent array
// 	for (int i = 1; i < V; ++i)
// 		printf("%d - %d\n", parent[i], i);
// }

// // Driver program to test methods of graph class
// int main()
// {
// 	int V = 9;
// 	vector<iPair > adj[V];

// 	// making above shown graph
// 	addEdge( 0, 1, 4);
// 	addEdge( 0, 7, 8);
// 	addEdge( 1, 2, 8);
// 	addEdge( 1, 7, 11);
// 	addEdge( 2, 3, 7);
// 	addEdge( 2, 8, 2);
// 	addEdge( 2, 5, 4);
// 	addEdge( 3, 4, 9);
// 	addEdge( 3, 5, 14);
// 	addEdge( 4, 5, 10);
// 	addEdge(5, 6, 2);
// 	addEdge( 6, 7, 1);
// 	addEdge( 6, 8, 6);
// 	addEdge( 7, 8, 7);

// 	primMST( V);

// 	return 0;
// }

