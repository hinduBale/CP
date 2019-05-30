#include <bits/stdc++.h>
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define endl "\n"
#define MOD 1000000007
#define F first
#define S second

using namespace std;

vector <int> path(100005, 0);

struct edges{
    int to, length;
};

int dijkstra(const vector<vector <edges> > &graph, int source, int target)
{
    vector <int> min_distance(graph.size(), INT_MAX);
    min_distance[source] = 0;
    set <pair <int, int> > active_vertices;
    active_vertices.insert({0, source});

    while(!active_vertices.empty())
    {
        int where = active_vertices.begin() -> S;
        if(where == target)
            return min_distance[target];
        active_vertices.erase(active_vertices.begin());
        for(auto i: graph[where])
        {
            if(min_distance[i.to] > min_distance[where] + i.length)
            {
                active_vertices.erase({min_distance[i.to], i.length});
                min_distance[i.to] = min_distance[where] + i.length;
                path[i.to] = where;
                active_vertices.insert({min_distance[i.to], i.to});
            }
        }
    }
    return INT_MAX;
}

int main()
{
        vector <vector <edges>> graph;
        int v, e;
        cin >> v >> e;
        vector <edges> init;
        for(int i = 0; i < v + 1; i++)
        {
            init.clear();
            graph.pb(init);
        }
        for(int i = 0; i < e; i++)
        {
            edges e;
            int node;
            cin >> node;
            cin >> e.to >> e.length;
            node--;
            e.to--;
            graph[node].pb(e);
            swap(node, e.to);
            graph[node].pb(e);
        }
        int source = 0;
        int target = v - 1;
        int res = dijkstra(graph, source, target);
        if(res == INT_MAX)
            cout << -1 << endl;
        else
        {
            int it = v - 1;
            vector <int> ans;
            ans.clear();
            ans.pb(v - 1);
            while(path[it] != 0)
            {
                ans.eb(path[it]);
                it = path[it];
            }
            reverse(ans.begin(), ans.end());
            cout << 1 <<" ";
            for(auto i = ans.begin(); i != ans.end(); i++)
                cout << *i + 1 << " ";
            cout << endl;
        }
    return 0;
}
