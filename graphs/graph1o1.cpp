//BFS -> Queue
//DFS -> Stack
//unweighted and undirected graph
//adjacency list implementation

#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"
#define mp make_pair
#define MOD 1000000007
#define lli long long int

using namespace std;

//This vector<int> adj[] is actually an array of vectors and the array is named adj[].
//Just like int arr[], here it is written vector<int> adj[]
void addEdge(vector <int> adj[], int u, int v)
{
    adj[u].pb(v); //adj[u] is a vector
    adj[v].pb(u); //adj[v] is a vector
}

void dfs(vector <int> adj[], int u, vector <bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for(int i = 0; i < adj[u].size(); i++)
    {
        if(visited[adj[u][i]] == false)
        {
            dfs(adj, adj[u][i], visited);
        }
    }
}

void dfsForAll(vector <int> adj [], int V)
{
    vector<bool> visited(V, false);
    for(int u = 0; u < V; u++)
    {
        if(visited[u] == false)
        {
            dfs(adj, u, visited);
        }
    }
}

int main()
{
    int V, e, u, v;
    cout << "Enter a reasonable number of vertices: " << endl;
    cin >> V ;
    vector <int> adj [V];
    cout << "Enter number of edges: " << endl;
    cin >> e;
    for(int i = 0; i < e; i++)
    {
        cin  >> u >> v;
        addEdge(adj, u, v);
    }
    dfsForAll(adj, V);
    return 0;
}
