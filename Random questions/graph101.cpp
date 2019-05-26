//Unweighted and undirected graph.

#include <bits/stdc++.h>

using namespace std;

int main()
{


    return 0;
}

#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define pb push_back

using namespace std;

bool visited[105];
vector <int> edge [105];

int bfs(int u)
{
    int v;
    queue <int> q;
    memset(visited, false, sizeof(visited));
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(int i = 0; i < edge[f].size(); i++)
        {
            v = edge[f][i];
            if(!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    return v;
}

int main()
{
    vector <int> v;
    int n ;
    cin >> n ;
    for(int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        v.pb(input);
    }

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <=n; j++)
            edge[i].pb(v[j]);

    for(int i = 1; i <=n; i++)
    {
        cout << bfs(i);
        if(i == n)
            cout << endl;
        else
            cout << " ";
    }

    return 0;
}

