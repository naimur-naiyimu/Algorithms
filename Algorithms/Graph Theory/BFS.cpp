#include <bits/stdc++.h>
using namespace std;
// Adjacency list representation of a graph
// Visited array to keep track of visited vertices
const int MAXN = 100;
int node,edge,u,v;
vector<int> adj[MAXN];
bool visited[MAXN];

void addEdge()
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
// BFS function
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";
        for (int adj_node : adj[head])
        {
            if (!visited[adj_node])
            {
                q.push(adj_node);
                visited[adj_node] = true;
            }
        }
    }
}

int main()
{
    // Initialize the graph
    // Add edges between vertices
    cin>>node>>edge;
    for (int i = 0; i < edge; i++)
    {
        cin>>u>>v;
        addEdge();
    }
    // Run BFS starting from vertex 0
    BFS(1);
    cout << endl;

    return 0;
}
/*
0-------1-------2------3
        |       |
        |       |
        5-------4
6 6

0 1
2 3
1 5
1 2
2 4
5 4


5
1 2
1 3
2 4
3 5
3 6
*/