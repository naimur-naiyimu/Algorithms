/*
Write a program that takes a directed graph as input
and checks whether it is bi-directionoal which means for every pair of nodes
where there is an edge u -> v, there should also be an edge v -> u.
*/

#include <bits/stdc++.h>
using namespace std;
int adjMat[1000][1000]= {0};
int n,m,count=0;
bool isBidirectional() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      // If there is an edge from i to j, check if there is also an edge from j to i
      if (adjMat[i][j] == 1 && adjMat[j][i] == 0) {
        return false;
      }
    }
  }
  return true;
}
void printMat(){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<adjMat[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (adjMat[v][u] == 0){
          adjMat[u][v] = 1;
          count ++;
        }
    }
    printMat();
    cout<<isBidirectional()<<endl;
    cout<<"the number of edges have to removed: "<<count<<endl;
}

/*

3
4
0 1
1 2
0 2
2 0


*/