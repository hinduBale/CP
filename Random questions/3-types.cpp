#include <bits/stdc++.h>
#define lli long long int
#define pii pair<int, int>
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

int min_edges = 0;
int arr1[10010], arr2[10010];
int plot [10010][4];
pair<int, pii> p[10010];

void initialize(int arr[])
{
    for(int i = 0; i < 10010; i++)
        arr[i] = i;
}

int root(int x, int arr[])
{
    while(x != arr[x])
    {
        arr[x] = arr[arr[x]];
        x = arr[x];
    }
    return x;
}

void union1(int a, int b, int arr[])
{
    int root_a = root(a, arr);
    int root_b = root(b, arr);
    arr[root_a] = arr[root_b];
}

void kruskal_modified(pair<int, pii> p[], int c, int nodes, int edges, int arr[], vector <bool> &visited)
{
    int y, x, gender;
    for(int i = 0 ; i < edges; ++i)
    {
        gender = p[i].F;
        x = p[i].S.F;
        y = p[i].S.S;

        if(gender != c or visited[i] == true)
            continue;
        if(root(x, arr) != root(y, arr))
        {
            union1(x, y, arr);
            ++min_edges;
            ++plot[x][c];
            ++plot[y][c];
        }
    }
}

void dfs(vector <int> adj[], int u, vector <bool> &visited)
{
    visited[u] = true;
    for(int i = 0; i < adj[u].size(); i++)
        if(!visited[adj[u][i]])
            dfs(adj, adj[u][i], visited);
}

bool isConnected(int a, int nodes, vector <int> adj[])
{
    vector <bool> visited (10010, false);
    bool flag = true;
    dfs(adj, a, visited);
    for(int i = 1; i <= nodes; i++)
        if(visited[i] == false)
            flag = false;
    return flag;
}

int main()
{
    bring_back_deepak_mehta
    int test = 1;
    //cin >> test;
    while(test--)
    {
        initialize(arr1);
        initialize(arr2);
        vector <int> men[10010];
        vector <int> women[10010];
        vector <bool> visited(10010, false);
        int a, b, c, nodes, edges;
        cin >> nodes >> edges;
        int m_s = -1, w_s = -1;
        for(int i = 0; i < edges; i++)
        {
            cin >> a >> b >> c;
            p[i] = (mp(c, mp(a, b)));
            if(c == 1)
            {
                if(m_s == -1)
                    m_s = a;
                else
                {
                    men[a].eb(b);
                    men[b].eb(a);
                }

            }
            else if(c==2)
            {
                if(w_s == -1)
                    w_s = a;
                else
                {
                    women[a].eb(b);
                    women[b].eb(a);
                }
            }
            else
            {
                men[a].eb(b);
                men[b].eb(a);
                women[a].eb(b);
                women[b].eb(a);
            }
        }
//        if(isConnected(m_s, nodes, men) == false or isConnected(w_s, nodes, women) == false)
//        {
//            cout << "-1" << endl;
//            return 0;
//        }
        sort(p, p + edges);
        for(int i = 0;i < edges; i++)
        {
            int u = p[i].S.F;
            int v = p[i].S.S;
            int w = p[i].F;
            if(w == 3 and root(u,arr1)!=root(v,arr1))
            {
                union1(u,v,arr1);
                union1(u,v,arr2);
                plot[u][3]++;
                plot[v][3]++;
                visited[i] = true;
                min_edges++;
            }
         }
         kruskal_modified(p, 1, nodes, edges, arr1, visited);
         kruskal_modified(p, 2, nodes, edges, arr2, visited);
        bool flag = 0;
        for(int i=1;i<=nodes;i++)
        {
            if(plot[i][3] || (plot[i][1] && plot[i][2]))
                continue;
            flag = 1;
            break;
        }
        if(flag)
            cout<<-1;
        else
            cout<<edges - min_edges;
    }
    return 0;
}
