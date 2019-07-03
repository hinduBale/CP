#include <bits/stdc++.h>
#define lli long long int
#define pf push_front
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

struct edges{
    int to, length;
};

void bfs(int source, const vector<vector<edges>> &graph)
{
    vector <int> min_distance(graph.size(), INT_MAX);
    min_distance[source] = 0;
    deque <int> q;
    q.pb(source);
    while(!q.empty())
    {
        int f = q.front();
        q.pop_front();
        for(auto e : graph[f])
        {
            if(min_distance[e.to] > min_distance[f] + e.length)
                min_distance[e.to] = min_distance[f] + e.length;
            if(e.length == 0)
                q.pf(e.to);
            else
                q.pb(e.to);
        }
    }
    for(int i = 0; i < graph.size(); i++)
        cout << min_distance[i] << " ";
}

int main()
{
    cout << "Enter number of vertices and edges: " << endl;
    int v, e;
    cin >> v >> e;
    vector <vector <edges> > graph;
    while(e--)
    {
        int a;
        edges input_edge;
        cin >> a >> input_edge.to >> input_edge.length;
        graph[a].pb(input_edge);
        swap(a, input_edge.to);
        graph[a].pb(input_edge);
    }

    return 0;
}
