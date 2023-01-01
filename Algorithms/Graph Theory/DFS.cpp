#include <bits/stdc++.h>
using namespace std;
// Adjacency list representation of a graph
// Visited array to keep track of visited vertices
const int MAXN = 100;
vector<int> adj[MAXN];
bool visited[MAXN];

void addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
// DFS function
void DFS(int u)
{
    visited[u] = true;
    cout << u << " ";
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            DFS(v);
        }
    }
}
int main()
{
    // Initialize the graph
    // Add edges between vertices
    int edge, a, b;
    cin >> edge;
    for (int i = 0; i < edge; i++)
    {
        cin >> a >> b;
        addEdge(a, b);
    }
    // Run DFS starting from vertex 0
    DFS(1);
    cout << endl;
    return 0;
}
/*
8
1 5
5 4
5 0
0 2
2 3
1 4
4 2
0 4


1 5 0 2 3 4 
*/