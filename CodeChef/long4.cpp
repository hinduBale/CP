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
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    IOS
    lli test;
    cin >> test;
    while(test--)
    {
        lli n, k, res = 0;
        cin >> n >> k;
        res = k - 1;
        lli x = (k-1)/(n-1);
        if((2*k) <= (k+n-1) || 2*k == k+n)
            cout << res << endl;
        else
        {
            lli sum = ((x*k) - (n*(x*(x+1)))/2 + (x*(x-1))/2)% MOD;
            res = (res + sum)%MOD;
            cout << res%MOD << endl;
        }
    }

    return 0;
}
