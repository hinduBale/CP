#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

vector <vector <int>> graph;
vector <bool> visited;
int length [1000] = {-1};
int parent [1000] = {-1};

void addEdge(int u, int v)
{
    graph[u].pb(v);
    graph[v].pb(u);
}

void bfsSolve(int u, int d, int e)
{
    int flag = 0;
    queue <int> q;
    q.push(u);
    length[u] = 0;
    parent[u] = 0;
    visited[u] = true;
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(int i = 0; i < graph[f].size(); i++)
        {
            int v = graph[f][i];
            if(!visited[v])
            {
                visited[v] = true;
                length[v] = length[f] + 1;
                parent[v] = f;
                q.push(v);
            }
        }
    }
    for(int i = 0; i < e; i++)
    {
        if(parent[i] == u && length[i] == d)
            ++flag;
    }
    cout << flag << endl;
}

int main()
{
    int n, e, test, u, v;
    cin >> n >> e;
    visited.assign(e, false);
    graph.assign(e, vector<int>());
    for(int i = 0; i < e; i++)
    {
        cin >> u >> v;
        addEdge(u, v);
    }
    cin >> test;
    while(test--)
    {
        int s, t;
        cin >> s >> t;
        bfsSolve(s, t, e);
    }
    return 0;
}



