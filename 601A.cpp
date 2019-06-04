#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define MOD 1000000007
#define f first
#define s second
#define inf INT_MAX
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    IOS
    int n, m, flag = 0;
    cin >> n >> m;
    int graph[410][410];
    int dis[410] = {0};
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    if(graph[1][n] == 0 or graph[n][1] == 0)
        flag = 1;
    dis[1] = 0;
    queue <int> q;
    q.push(1);
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(int i = 2; i <= n; i++)
            if(graph[f][i] == flag and dis[i] == 0)
            {
                q.push(i);
                dis[i] = dis[f] + 1;
            }
    }
    if(dis[n] == 0)
        cout << -1 << endl;
    else
        cout << dis[n] << endl;

return 0;
}

