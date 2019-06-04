#include <bits/stdc++.h>
#define pb push_back
#define endl "\n"
#define mp make_pair
#define MOD 1000000007
#define lli long long int

using namespace std;

lli danger = 1;

lli dfsSolve(vector <bool> & visited, lli u, vector <lli> graph[])
{
    if(!visited[u])
        visited[u] = true;
    for(auto i : graph[u])
        if(!visited[i])
        {
            dfsSolve(visited, i, graph);
            danger *= 2;
        }

    return danger;
}

int main()
{
    lli v, e, res = 0;
    cin >> v >> e;
    vector <lli> graph[55];
    vector <bool> visited (v+1, false);
    for(lli i = 0; i < e; i++)
    {
        lli a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    for(lli i = 1; i <= v; i++)
    {
        if(!visited[i])
        {
            res = dfsSolve(visited, i, graph);
        }
    }
    cout << res << endl;
    return 0;
}
