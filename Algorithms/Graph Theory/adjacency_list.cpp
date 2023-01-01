#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
int edge;
vector<int> adj[MAXN];

// A utility function to add an edge in an
// undirected graph.
void addEdge( int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph()
{
	for (int v = 0; v < edge; ++v) {
		cout << "\n Adjacency list of  " << v
			<< "\n head ";
		for (auto x : adj[edge])
			cout << "-> " << x;
		printf("\n");
	}
}

// Driedgeer code
int main()
{
	int  a, b;
    cin >> edge;
    for (int i = 0; i < edge; i++)
    {
        cin >> a >> b;
        addEdge( a, b);
    }
	printGraph( );
	return 0;
}

/*
5
1 2
2 3
1 3
2 4
4 3


*/