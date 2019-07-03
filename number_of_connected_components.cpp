#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define MOD 1000000007
#define F first
#define S second
#define inf INT_MAX
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pii pair<int, int>

using namespace std;

vector <bool> visited(10010, false);
vector <int> graph [10010];

void dfs(int x)
{
    visited[x] = true;
    for(int i = 0; i < graph[x].size(); i++)
        if(!visited[graph[x][i]])
            dfs(graph[x][i]);
}

int main()
{
    int nodes, edges, a, b, cnt_connected = 0;
    cout << "Enter number of vertices, edges and then the edges" << endl;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++)
    {
        cin >> a >> b;
        graph[a].eb(b);
        graph[b].eb(a);
    }
    for(int i = 1; i <= nodes; i++)
        if(!visited[i])
        {
//            cout << i << " ne maa chuda li hai" << endl;
            dfs(i);
            ++cnt_connected;
        }
    cout << cnt_connected << endl;
}
