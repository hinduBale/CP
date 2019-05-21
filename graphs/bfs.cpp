#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define lli long long int

using namespace std;

vector <bool> visited;
vector <vector <int> > g;

void edge(int u, int v)
{
    g[u].pb(v);
    g[v].pb(u); //Exclude this line if the graph is directed.
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while( !q.empty())
    {
        int f = q.front();
        q.pop();
        cout << f << " ";
        for(auto it = g[f].begin; it != g[f].end(); it++)
        {
            if(!visited[*it])
            {
                q.push(*it);
                visited[*it] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    visited.assign(n, false);
    g.assign(n, vector<int>());

    int u, v;
    for(int i = 0; i < e; i++)
    {
        cin >> u >> v;
        edge(u, v);
    }
    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
            bfs(i);
    }
    return 0;
}
