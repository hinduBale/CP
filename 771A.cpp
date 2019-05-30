#include <bits/stdc++.h>
#define eb emplace_back
#define pb push_back
#define lli long long int

using namespace std;

vector <bool> visited (150123, false);
lli vertices, edges;

void addEdge(vector <int> adj[], int a, int b)
{
    adj[a].pb(b);
    adj[b].pb(a);
}

void dfs(vector <int> adj [], int u, int vertices, int edges, vector <bool> visited)
{
    assert(!visited[u]);
    visited [u] = true;
    ++vertices;
    edges += adj[u].size();
    for(auto i : adj[u])
        if(visited[i] == false)
            dfs(adj, i, vertices, edges, visited);
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector <int> adj [150123];
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >>a >> b;
        addEdge(adj, a, b);
    }
    for(int i = 1; i <= v; i++)
    {
        if(!visited[i])
        {
          vertices = 0, edges = 0;
          dfs(adj, i, vertices, edges, visited);
          if(edges != (long long) (vertices * (vertices - 1)))
          {
              cout << "NO" << endl;
              return 0;
          }
        }
    }
    cout << "YES" << endl;
}

