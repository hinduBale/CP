#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define pf push_front
#define MOD 1000000007
#define F first
#define S second
#define inf INT_MAX
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define bring_back_deepak_mehta ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

void dfs(vector <int> adj[], int u, vector <bool> &visited)
{
    visited[u] = true;
    for(int i = 0; i < adj[u].size(); i++)
        if(!visited[adj[u][i]])
            dfs(adj, adj[u][i], visited);
}

bool isConnected(int a, int nodes, vector <int> adj[])
{
    vector <bool> visited (10010, false);
    bool flag = true;
    dfs(adj, a, visited);
    for(int i = 1; i <= nodes; i++)
        if(visited[i] == false)
            flag = false;
    return flag;
}

int main()
{
    bring_back_deepak_mehta
    int test = 1;
    //cin >> test;
    while(test--)
    {
        vector <int> men[10010];
        vector <int> women[10010];
        vector <bool> visited(10010, false);
        int a, b, c, nodes, edges, total_edges = 0;
        cin >> nodes >> edges;
        int m_s = -1, w_s = -1;
        for(int i = 0; i < edges; i++)
        {
            cin >> a >> b >> c;
            if(c == 1)
            {
                ++total_edges;
                if(m_s == -1)
                    m_s = a;
                else
                {
                    men[a].eb(b);
                    men[b].eb(a);
                }

            }
            else if(c==2)
            {
                ++total_edges;
                if(w_s == -1)
                    w_s = a;
                else
                {
                    women[a].eb(b);
                    women[b].eb(a);
                }
            }
            else
            {
                total_edges += 2;
                men[a].eb(b);
                men[b].eb(a);
                women[a].eb(b);
                women[b].eb(a);
            }
        }
        if(isConnected(m_s, nodes, men) == false or isConnected(w_s, nodes, women) == false)
        {
            cout << "-1" << endl;
            return 0;
        }
        int total_edges_in_mst = 2*(nodes - 1);
        cout << total_edges - total_edges_in_mst << endl;
    }
    return 0;
}

