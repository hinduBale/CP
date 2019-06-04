#include <bits/stdc++.h>
#define lli long long int
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

int main()
{
    vector <int> v;
    int n, res = 0, lund;
    cin >> n;
    if(n == 1)
    {
        cin >> lund;
        cout << "0" << endl;
    }

    else
    {
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.eb(a);
        }
        sort(v.begin(), v.end(), greater<int>() );
        for(int i = 1; i < v.size(); i++)
        {
            if(v[0] != v[i])
            {
                int ans = v[0] - v[i];
                res += ans;
            }

        }
    cout << res << endl;
    }
    return 0;
}
