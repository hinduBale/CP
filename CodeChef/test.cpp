#include <bits/stdc++.h>
#define lli long long int

using namespace std;

lli gcd(lli a, lli b)
{
    if(b == 0)
        return 0;
    return gcd(b, a % b);
}

int main()
{
    lli a = 12, b = 2;
    lli res = gcd(b,a);
    cout << res << endl;
    cout << gcd(a, b) << endl;
    return 0;
}
