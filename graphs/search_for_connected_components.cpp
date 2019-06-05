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

using namespace std;

vector <lli> graph[100010];
bool visited[100010];
vector <lli> comp;

void dfs(int u)
{
    visited[u] = true;
    comp.eb(u);
    for(auto i : graph[u])
        if(!visited[i])
            dfs(i);
}

int main()
{
    lli n, m;
    cin >> n >> m;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].eb(b);
        graph[b].eb(a);
    }
    for(lli i = 0; i < n; i++)
        visited[i] = false;
    for(lli i = 0; i < n; i++)
        if(!visited[i])
        {
            comp.clear();
            dfs(i);
            cout << "A component is:" << endl;
            for(lli i = 0; i < comp.size(); i++)
                cout << comp[i] << " ";
            cout << endl;
        }
}
