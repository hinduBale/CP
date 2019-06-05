//https://www.spoj.com/problems/CCOMPS/

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

lli res = 0;
vector <int> graph[100010];
bool visited [100010];

void dfs(int u)
{
    visited[u] = true;
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
        lli a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    for(lli i = 0; i < n; i++)
        visited[i] = false;
    for(lli i = 0; i < n; i++)
        if(!visited[i])
        {
            dfs(i);
            ++res;
        }

    cout << res << endl;
    return 0;
}

