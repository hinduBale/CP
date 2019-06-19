//https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/practice-problems/algorithm/quantitative-coefficient/
/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

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

vector <pair<lli,lli>> adj[1000010];
bool visited [1000010];

lli prim(lli x)
{
    priority_queue <pair<lli, lli>, vector <pair<lli,lli>>, greater<pair<lli,lli>>> q;
    pair<lli,lli> p;
    lli min_cost = 1, y;
    q.push(mp(1, x));
    while(!q.empty())
    {
        p = q.top();
        q.pop();
        x = p.S;
        if(visited[x] == true)
            continue;
        min_cost = ((min_cost)%MOD * (p.F)%MOD)%MOD;
        visited[x] = true;
        for(auto i : adj[x])
        {
            lli y = i.S;
            if(visited[y] == false)
                q.push(i);
        }
    }
    return min_cost;
}

int main()
{
    bring_back_deepak_mehta
    lli test;
    cin >> test;
    while(test--)
    {
        lli nodes, edges;
        cin >> nodes >> edges;
        lli a, b, weight;
        for(lli i = 0; i <= nodes; i++)
        {
            adj[i].clear();
            visited[i] = {false};
        }
        for(lli i = 0; i < edges; i++)
        {
            cin >> a >> b >> weight;
            weight = weight % MOD;
            adj[a].pb(mp(weight, b));
            adj[b].pb(mp(weight, a));
        }
        lli min_cost = prim(1);
        cout << min_cost % MOD <<endl;
    }
    return 0;
}

