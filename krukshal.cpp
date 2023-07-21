// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public:
// 	int val;
// 	int rank;
// 	Node* parent;
// };
// 	map<int,Node*> mp;

// void createset(int v){
// 	Node* nn=new Node();
// 	(*nn).val=v;
// 	nn->rank=0;
// 	nn->parent=nn;
// 	mp.insert({v,nn});
// }
// Node* findd(Node* nn){
// if(nn->parent==nn)return nn;
// return findd(nn->parent);
// }
// int find(int v){
// 	Node* nn=mp[v];
// 	return findd(nn).val;
// }
// void union(int v1,int v2){
// 	Node* n1=mp[v1];
// 	Node* n2=mp[v2];
// 	Node* rn1=find(n1);
// 	Node* rn2=find(n2);
// 	if(rn1->rank==rn2->rank){
// 		rn1->parent=rn2;
// 		rn2->rank=rn2->rank+1;
// 	}else if(rn1->rank>rn2->rank){
// rn2->parent=rn1;
// 	}else{
// 		rn1->parent=rn2;
// 	}
// }
// class graph{
// public:

// void addedge(int x,int y,int wt){
// l[x].insert(make_pair(y,wt));
// l[y].insert(make_pair(x,wt));
// }
// class edgepair{
// 	int e1,e2,cost;
// public:
// 	edgepair(int e1,int e2,int cost){
// 		this->e1=e1;
// 		this->e2=e2;
// 		this->cost=cost;
// 	}
// }
// vector<edgepair> getalledges(){
// 	vector<edgepair> list;
// 	for(int e1:mp){
// 		for(int e2:e1.second){
//             edgepair eg(e1,e2,e2.second);
//             list.push_back(eg);
// 		}
// 	}
// 	return list;
// }
// void krukshalsalgo(){
// 	int ans=0;
// 	Node* ds=new Node();
//       for(int k:mp){
//       	ds.createset(k);
//       }
//       vector<edgepair> ll=getalledges();
//       sort(ll.begin(),ll.end());
// for(edgepair edge:ll){
// 	int e1=edge.e1;
// int e2=edge->e2;
// int re1 = ds.find(e1);
// 			int re2 = ds.find(e2);
// 			if (re1 == re2) {
// 				// nothing
// 			} else {
// 				cout<<(edge);
// 				ans += edge->cost;
// 				ds.union(re1, re2);
// 			}

// 		}
// 		cout<<ans;
// }

// int main(){
// 	int n;cin>>n;
// 	int m;cin>>m;
// 	graph ks;
// 	for(int i=0;i<m;i++){
// 	int v1,v2,cost;
// 	cin>>v1>>v2>>cost;
// 	ks.addedge(v1,v2,cost)
// 	}
// 	ks.krukshalsalgo();
// }
//https://www.techiedelight.com/kruskals-algorithm-for-finding-minimum-spanning-tree/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Data structure to store a graph edge
struct Edge {
	int src, dest, weight;
};

// Comparison object to be used to order the edges
struct compare
{
	bool operator() (Edge const &a, Edge const &b) const {
		return a.weight > b.weight;
	}
};

// A class to represent a disjoint set
class DisjointSet
{
	unordered_map<int, int> parent;

public:
	// perform MakeSet operation
	void makeSet(int n)
	{
		// create `n` disjoint sets (one for each vertex)
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}

	// Find the root of the set in which element `k` belongs
	int Find(int k)
	{
		// if `k` is root
		if (parent[k] == k) {
			return k;
		}

		// recur for the parent until we find the root
		return Find(parent[k]);
	}

	// Perform Union of two subsets
	void Union(int a, int b)
	{
		// find the root of the sets in which elements
		// `x` and `y` belongs
		int x = Find(a);
		int y = Find(b);

		parent[x] = y;
	}
};

// Function to construct MST using Kruskal’s algorithm
vector<Edge> runKruskalAlgorithm(vector<Edge> edges, int n)		// no-ref, no-const
{
	// stores the edges present in MST
	vector<Edge> MST;

	// initialize `DisjointSet` class
	DisjointSet ds;

	// create a singleton set for each element of the universe
	ds.makeSet(n);

	// sort edges by increasing weight
	sort(edges.begin(), edges.end(), compare());

	// MST contains exactly `V-1` edges
	while (MST.size() != n - 1)
	{
		// consider the next edge with minimum weight from the graph
		Edge next_edge = edges.back();
		edges.pop_back();

		// find the root of the sets to which two endpoints
		// vertices of the next edge belongs
		int x = ds.Find(next_edge.src);
		int y = ds.Find(next_edge.dest);

		// if both endpoints have different parents, they belong to
		// different connected components and can be included in MST
		if (x != y)
		{
			MST.push_back(next_edge);
			ds.Union(y, x);
		}
	}
	return MST;
}

int main()
{
	// vector of graph edges as per the above diagram.
	vector<Edge> edges =
	{
		// (u, v, w) triplet represent undirected edge from
		// vertex `u` to vertex `v` having weight `w`
		{0, 1, 7}, {1, 2, 8}, {0, 3, 5}, {1, 3, 9}, {1, 4, 7}, {2, 4, 5},
		{3, 4, 15}, {3, 5, 6}, {4, 5, 8}, {4, 6, 9}, {5, 6, 11}
	};

	// total number of nodes in the graph (labelled from 0 to 6)
	int n = 7;

	// construct graph
	vector<Edge> e = runKruskalAlgorithm(edges, n);

	for (Edge &edge: e)
	{
		cout << "(" << edge.src << ", " << edge.dest << ", "
			 << edge.weight << ")" << endl;
	}

	return 0;
}                            
                                  
                           
                         
                          
                            
                                                       
      3986000100104936               


               
                    
                 
                







