#include <bits/stdc++.h>
#define pf push_front
#define pb push_back
#define endl "\n"
#define inf INT_MAX

using namespace std;

struct edges{
    int to, length;
};

void bfs01(int source, vector<vector<edges>> graph)
{
    vector <int> min_distance[graph.size(), inf];
    min_distance[source] = 0;
    deque <int> q;
    q.pb(source);
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(auto e : graph[f])
            if(min_distance[e.to] > min_distance[f] + e.length)
            {
                min_distance[e.to] = min_distance[f] + e.length;
                if(e.length == 1)
                    q.pb(e.to);
                else
                    q.pf(e.to);
            }
    }
}

int main()
{
    vector<vector<edges>> graph;
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
        int node;
        edges input_edge;
        cin >> node;
        cin >> input_edge.to >> input_edge.length;
        node = node - 1;  //since the djikstra function is for 0 based indexing
        input_edge.to = input_edge.to - 1;
        graph[node].pb(input_edge);
    }

    return 0;
}
