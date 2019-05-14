#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

lli expo(lli a, lli n)
{
    lli res = 1;
    while(n > 0)
    {
        if(n & 1)
            res = a * res;
        a = a * a;
        n = n >> 1;
    }
    return res;
}

int main()
{
    IOS
    lli a, n;
    cout << "For a raised to the power n; enter values of a and n" << endl;
    cin >> a >> n;
    cout << expo(a, n) << endl;
    return 0;
}

