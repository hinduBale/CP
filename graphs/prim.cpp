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

bool marked [100010];
vector <pair <int, int>> adj [10010];

int prim(int x)
{
    priority_queue < pair<int, int>, vector <pair<int, int>>, greater<pair <int, int>>> Q;
    int y, min_cost = 0;
    pair<int, int> p;
    Q.push(mp(0, x));
    while(!Q.empty())
    {
        p = Q.top();
        Q.pop();
        x = p.second;
        if(marked[x] == true)
            continue;
        min_cost += p.first;
        marked[x] = true;
        for(int i = 0; i < adj[x].size(); i++)
        {
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    return min_cost;
}

int main()
{
    bring_back_deepak_mehta
    int nodes, edges, x, y, weight, minimum_cost = 0;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++)
    {
        cin >> x >> y >> weight;
        adj[x].pb(mp(weight, y));
        adj[y].pb(mp(weight, x));
    }
    minimum_cost = prim(1); //Selecting 1 as the starting node
    cout << minimum_cost << endl;
    return 0;
}
