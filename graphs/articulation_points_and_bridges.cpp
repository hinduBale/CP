/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

#include <bits/stdc++.h>
#define lli long long int
#define pii pair<int,int>
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
#define i_am_iron_man ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

vector <int> graph [10010];
int disc[10010];
int low[10010];
int parent[10010] = {-1};
bool visited[10010] = {false};
bool AP[10010] = {false};

void dfs(int V, int vertices, int time)
{
    visited[V] = true;
    disc[V] = low[V] = time + 1;
    int child = 0;
    for(int i = 0; i < vertices; i++)
    {
        if(graph[V][i] == true)
            if(!visited[i])
            {
                ++child;
                parent[i] = V;
                dfs(i, vertices, time+1);
                low[V] = min(low[V], low[i]);
                if(parent[V] == -1 && child > 1)
                    AP[V] = true;
                if(parent[V] != -1 && low[i] >= disc[V])
                    AP[V] = true;
                else if(parent[V] != i)
                low[V] = min(low[V], disc[i]);
            }
    }
}

int main()
{
    i_am_iron_man
    int vertices, edges, a, b, time = 0;
    cin >> vertices >> edges;
    for(int i = 0; i < edges; i++)
    {
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    dfs(a, vertices, time);
    cout << "Articulation points of this graph is: " << endl;
    for(int i = 0; i < vertices; i++)
        if(AP[i] == true)
            cout << i <<" ";
        cout << endl;
    return 0;
}
