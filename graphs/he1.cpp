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

int arr[100010], vertices, edges;
pair<int, pair<int, int>> p[100010];

void initialize()
{
    for(int i = 0; i < 100010; i++)
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

void union1(int a, int b)
{
    int root_a = root(a);
    int root_b = root(b);
    arr[root_a] = arr[root_b];
}

int kruskal(pair<int, pair<int, int>> p[])
{
    int minimum_cost = 0, a, b,cost = 0;
    for(int i = 0; i < edges; i++)
    {
        cost = p[i].first;
        a = p[i].second.first;
        b = p[i].second.second;
        if(root(a) != root(b))
        {
            minimum_cost += cost;
            union1(a, b);
        }
    }
    return minimum_cost;
}

int main()
{
    cin >> vertices >> edges;
    initialize();
    for(int i = 0; i < edges; i++)
    {
        int weight, v1, v2;
        cin >> v1 >> v2 >> weight;
        p[i] = mp(weight, mp(v1, v2));
    }
    sort(p, p + edges);
    cout <<kruskal(p)<< endl;
    return 0;
}
