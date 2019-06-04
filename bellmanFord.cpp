/*Unlike many other graph algorithms, for
Bellman-Ford algorithm, it is more convenient to represent the graph using a single
list of all edges (instead of n lists of edges - edges from each vertex)*/

/*This algorithm can be somewhat sped up: often we already get the answer in
a few phases and no useful work is done in remaining phases, just a waste visiting
all edges. So, let's keep the flag, to tell whether something changed in the current
phase or not, and if any phase, nothing changed, the algorithm can be stopped. */

/* we obtain the criterion for presence of a cycle of negative weights reachable
for source vertex v: after (n minus 1)th phase, if we run algorithm for one more phase,
and it performs at least one more relaxation, then the graph contains a negative
weight cycle that is reachable from v; otherwise, such a cycle does not exist.*/

#include<bits/stdc++.h>
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

struct edges{
    int a, b, cost;
};
vector <edges> graph;

void solve(int n, int m)
{
    vector<int> d(n, inf);
    d[v] = 0;
    vector<int> p(n-1);
    int x;
    for(int i = 0; i < n; i++)
    {
        x = -1;
        for(int j = 0; j < m; j++)
            if(d[e[j].a] < inf)
                if(d[e[j].b] > d[e[j].a] + e[j].cost)
                {
                    d[e[j].b] = max(-inf, d[e[j].a] + e[j].cost);
                    p[e[j].b] = e[j].a;
                    x = e[j].b;
                }
    }
    if(x == -1)
        cout <<"No negative cycle" << endl;
    else
    {
        int y =x;
        for(int i = 0; i < n; i++)
            y = p[y];
        vector<int> path;
        for(int cur = y; ; cur = p[cur])
        {
            path.pb(cur);
            if(cur == y and path.size() > 1)
                break;
        }
        reverse(path.begin(), path.end());

        cout << "Negative Cycle: " << endl;
        for(int i = 0; i < path.size(); ++i)
            cout << path[i] << ' ';
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    return 0;
}

