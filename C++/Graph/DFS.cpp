#include<iostream>
#include<vector>
#include<queue>
/*
  DFS - Depth first search
  For tree it will visit pre-order( tree traversal )
  ALMOST SAME AS BFS
*/
using namespace std;

#define N 8
vector<int> adj[N];
int vis[N];

void DFS( int node )
{
    cout << node << " " ;
    vis[ node ] = 1;
    for( auto u : adj[ node ]){
        if( !vis[ u ]){
            DFS( u );// Going for child node
        }
    }
}

int main()
{
    int m = 11;
    for( int i=0; i<m ; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back( b );
        adj[b].push_back( a );
    }

    for( int i=0; i<N; i++){
        if( !vis[ i ]){
            DFS( i );
        }
    }
}
/*
Graph Making website - https://csacademy.com/app/graph_editor/
  Input-
11
0 5
0 4
5 4
5 1
5 2
4 1
2 1
2 3
2 7
7 6
1 2
Output - 0 5 4 1 2 3 7 6
*/