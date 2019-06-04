#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define MOD 1000000007
#define inf INT_MAX
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    IOS
    int n, m;
    cin >> n >> m;
    int res = 0;
    if(n > m)
    {
        cout << n-m << endl;
        return 0;
    }
    vector <int> dis(10002, -1);
    dis[n] = 0;
    queue <int> q;
    q.push(n);
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        if(f == m)
        {
            cout << dis[f] << endl;
            return 0;
        }
        if((f*2) <= 10000)
        {
            if(dis[2*f] = -1)
            {
                dis[2*f] = dis[f] + 1;
                q.push(2*f);
            }
        }
        if(f > 1 and dis[f-1] == -1)
        {
            dis[f-1] = dis[f]+ 1;
            q.push(f-1);
        }

    }
    return 0;
}
