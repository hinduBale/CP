#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void addEdge(int u, int v, vector<int> graph [])
{
    graph[u].pb(v);
    graph[v].pb(u);
}

int main()
{
    IOS
    int n, e, test, u, v;
    cin >> n >> e;
    vector <int> graph [n + 1];
    for(int i = 0; i < e; i++)
    {
        cin >> u >> v;
        addEdge(u, v, graph);
    }
    cin >> test;
    while(test--)
    {
        vector <bool> visited;
        visited.assign(e, false);
        int length [1000] = {-1};
        int parent [1000] = {-1};
        int s, t;
        cin >> s >> t;
        int flag;
        queue <int> q;
        q.push(s);
        visited[s] = true;
        length[s] = 0;
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
                    if(length[v] == t)
                        ++flag;
                    q.push(v);
                }
            }
        }
        cout << flag << endl;
        flag = 0;
    }
    return 0;
}



