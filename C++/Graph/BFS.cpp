#include<iostream>
#include<vector>
#include<queue>
using namespace std;
/*
  BFS - Breath First Search.
  It will visit level order.
  We are using Adjacency list for bfs representation.
*/
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);// Last part used to print all at the end
#define N 8 //Number of nodes

vector <int> adj[N];// array of vector // Adjacency List
int vis[N]; // Visited Array

void BFS (int node){
    queue <int> q;
    q.push(node);
    vis[node] = 1;//declared visited

    while( !q.empty() ){
        int a = q.front();
        q.pop();
        cout << a << " ";
        for( auto u : adj[ a ]){
            if( !vis[ u ] ){// is visited or not
                q.push( u );
                vis[ u ] = 1;
            }
        }
    }
}

int main()
{
    fastIO;
 
    int m; cin >> m;// Number of edges
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for( auto i=0; i<N; i++){
        if( !vis[i] ){
            BFS( i );
        }
    }
}
/*
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
4 6
Output - 0 5 4 1 2 6 3 7
*/
