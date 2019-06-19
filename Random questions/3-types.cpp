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

vector <pair <int, int>> men [100010];
vector <pair <int, int>> women [100010];

vector <bool> visited(100010, false);

int dfs(vector <pair<int, int>> v, int x)
{
    visited[x] = true;
    for(int i = 0; i < v[x].size(); i++)
    {
        int y = v[x][i].second;
        if(visited[y] == false)
            dfs(v, y);
    }
}

bool isConnected(vector <pair<int, int>> v)
{
    dfs(v);
    bool flag = true;
    for(int i = 0 ; i < nodes; i++)
        if(!visited[i])
        {
            flag = false;
            break;
        }
    for(int i = 0; i < nodes; i++)
        visited[i] = false;
    return flag;
}

int main()
{
    int nodes, edges, a, b, c;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++)
    {
        cin >> a >> b >> c;
        if(c == 1)
        {
            men[a].pb(mp(c, b));
            men[b].pb(mp(c, a));
        }
        else if(c == 2)
        {
            women[a].pb(mp(c, b));
            women[b].pb(mp(c, a));
        }
        else
        {
            men[a].pb(mp(c, b));
            men[b].pb(mp(c, a));
            women[a].pb(mp(c, b));
            women[b].pb(mp(c, a));
        }
    }
    if(isConnected(men) == false or isConnected(women) == false)
    {
        cout << "-1" << endl;
        return 0;
    }

}
