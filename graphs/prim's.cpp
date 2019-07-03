#include <bits/stdc++.h>
#define lli long long int
#define pf push_front
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

struct edges{
    int wt = 0, to = -1;
    bool operator < (edges const& other) const {
        return w < other.w;
    }
};

void prim()
{
    int total_wt = 0;
    vector<edges> min_e(n);
    min_e[0].
}

int main()
{

    return 0;
}

