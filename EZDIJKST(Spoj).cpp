#include <bits/stdc++.h>
#define eb emplace_back
#define endl "\n"
#define pb push_back

using namespace std;

struct edges{
    int to, length;
};

int djikstra(const vector<vector <edges> > &graph, int source, int target)
{
    vector <int> min_distance(graph.size(), INT_MAX);
    min_distance[source] = 0;
    set <pair<int,int>> active_vertices;
    active_vertices.insert({0, source});

    while(!active_vertices.empty())
    {
        int where = active_vertices.begin() -> second;
        if(where == target)
            return min_distance[target];
        active_vertices.erase(active_vertices.begin());
        for(auto i: graph[where])
        {
            if(min_distance[i.to] > min_distance[where] + i.length);
            {
                active_vertices.erase({min_distance[i.to], i.to});
                min_distance[i.to] = min_distance[where] + i.length;
                active_vertices.insert({min_distance[i.to], i.to});
            }
        }
    }
    return INT_MAX;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        vector <vector <edges> > graph;
        int v, e;
        cin >> v >> e;
        for(int i = 0; i < e; i++)
        {
            int node;
            edges input_edge;
            cin >> node;
            cin >> input_edge.to >> input_edge.length;
            node = node - 1;  //since the djikstra function is for 0 based indexing
            input_edge.to = input_edge.to - 1;
            graph[node].pb(input_edge);
        }
        int source, target;
        cin >> source >> target;
        --source; --target;
        int res = djikstra(graph, source, target);
        if(res == INT_MAX)
            cout << "NO" << endl;
        else
            cout << res << endl;
    }

    return 0;
}
