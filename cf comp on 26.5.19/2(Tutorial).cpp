#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define f first
#define s second
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    lli n, m, a, b, flag2 = 0;
    cin >> n >> m;
    lli cnt[n+1] = {0};
    vector <pair <lli, lli> > v;
    for(lli i = 0; i < m; i++)
    {
        cin >> a >> b;
        a--;
        b--;
        v.eb(a, b);
    }
    vector <int> values = {v[0].first, v[0].second};
    for(lli x : values)
    {
        vector <lli> val(n);
        lli flag1 = 0;
        for(auto i : v)
        {
            if(i.f != x && i.s != x)
            {
                val[i.f]++;
                val[i.s]++;
                flag1++;
            }
        }
        if(*max_element(val.begin(), val.end()) == flag1)
        {
            cout << "YES" << endl;
            ++flag2;
            return 0;
        }
    }
    if(flag2 == 0)
        cout << "NO" << endl;

}



