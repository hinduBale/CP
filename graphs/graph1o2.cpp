#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl "\n"

using namespace std;

void addEdge(int u, int v, int wt, vector <pair <int, int> > adj[])
{
    adj[u].pb(mp(v, wt));
    adj[v].pb(mp(u, wt));
}

void printGraph(int V, vector <pair <int, int> > adj[])
{
    for(int u = 0; u < V; u++)
    {
        cout << "Node " << u << "makes an edge with : " << endl;
        int v, w;
        for(auto it = adj[u].begin(); it != adj[u].end(); it++)
        {
            v = it -> first;
            w = it -> second;
            cout << "Node " << v << " weighted " << w << endl;
        }
        cout << endl;
    }
}

int main()
{
    int V, e;
    cout << "Enter number of vertices and edges: " << endl;
    cin >> V >> e;
    vector <pair <int, int> > adj [V];
    for(int i = 0; i < e; i++)
    {
        int u, v, w;
        addEdge(u, v, w, adj);
    }
    printGraph(V, adj);
    return 0;
}
