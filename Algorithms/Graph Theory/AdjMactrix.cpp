#include <bits/stdc++.h>
using namespace std;
int adjMat[1000][1000]= {0};
int n,m;

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
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }
    printMat();
}

/*
0<----1
|     |
-->2<-
3 3
1 2
1 0
0 2

0 1 1
1 0 1
1 1 0
*/