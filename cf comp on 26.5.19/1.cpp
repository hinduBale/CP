#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

vector <int> tour1(int n, int a, int x)
{
    vector <int> v1;
    int i = a;
    while(i != x)
    {
        if(i < n)
        {
            v1.pb(i);
            ++i;
        }
        else
        {
            v1.pb(i);
            i = 1;
        }
    }
    v1.pb(x);
    return v1;
}

vector <int> tour2(int n, int b, int y)
{
    vector <int> v2;
    int i = b;
    while(i != y)
    {
        if(i > 1)
        {
            v2.pb(i);
            i -= 1;
        }
        else
        {
            v2.pb(i);
            i = n;
        }
    }
    v2.pb(y);
    return v2;
}

int main()
{
    int n,a, x, b, y;
    int flag = 0, s;
    cin >> n >> a>> x >> b >> y;
    vector<int> v = tour1(n, a, x);
    vector <int> V = tour2(n, b, y);
    if(v.size() > V.size())
        s = V.size();
    else
        s = v.size();
    for(int i = 0; i < s; i++)
    {
        if(V[i] == v[i])
            ++flag;
    }
    if(flag > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}



