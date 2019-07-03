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
    int test;
    cin >> test;
    while(test--)
    {
        vector <int> v;
        int n, x, zeroes = 0, ones = 0, k;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.eb(input);
            if(v[i] == 0)
                ++zeroes;
            else if(v[i] == 1)
                ++ones;
        }
        cin >> k >> x;
        for(int i = 0; i < n; i++)

    }
    return 0;
}
