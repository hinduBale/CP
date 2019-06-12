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

int main()
{
    int n, m;
    cin >> n >> m;
    if(m < n)
    {
        cout << n-m << endl;
        return 0;
    }
    vector <int> dis (10002, -1);
    queue <int> q;
    dis[n] = 0;
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
        if(2*f <= 10000)
        {
            if(dis[2*f] == -1)
            {
                dis[2*f] = dis[f]+1;
                q.push(2*f);
            }
        }
        if(dis[f-1] == -1 and f > 1)
        {
            dis[f-1] = dis[f] + 1;
            q.push(f-1);
        }
    }
    return 0;
}

