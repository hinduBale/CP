#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define pf push_front
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
    IOS
    int x, y, z;
    cin >> x >>  y >>z;
    if( x > y and (x-y) > z)
        cout << "+" << endl;
    else if(y > x and (y-x) > z)
        cout <<"-" << endl;
    else if ((x == y) and z == 0)
        cout << "0" << endl;
    else
        cout << "?" << endl;
    return 0;
}

