#include <bits/stdc++.h>
#define lli long long int
#define inf INT_MAX

using namespace std;

int arr[10000], nodes, edges;
pair <lli, pair<int, int>> p[10000];

void initialize()
{
    for(int i = 0; i < inf; i++)
        arr[i] = i;
}

int root(int x)
{
    while(arr[x] != x)
    {
        arr[x] = arr[arr[x]];
        x = arr[x];
    }
    return x;
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    arr[p] = arr[q];
}

lli kruskal(pair <lli, pair<int, int>> p[])
{
    int x, y;
    lli cost, minimum_cost = 0;
    for(int i = 0; i < edges; i++)
    {
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        if(root(x) != root(y))
        {
            minimum_cost += cost;
            union1(x, y);
        }
    }
    return minimum_cost;
}

int main()
{
    int x, y;
    lli weight, cost, minimum_cost;
    initialize();
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    sort(p, p+edges);
    minimum_cost = kruskal(p);
    cout << minimum_cost << endl;
    return 0;
}
