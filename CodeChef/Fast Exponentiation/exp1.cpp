//https://www.codechef.com/problems/FEXP

#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

lli expo(lli a, lli n, lli m)
{
    a = a % m;
    lli res = 1;
    while(n > 0)
    {
        if(n & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        n = n >> 1;
    }
    return res ;
}

int main()
{
    IOS
    lli test;
    cin >> test;
    while(test--)
    {
        lli a, n;
        cin >> a >> n;
        cout << expo(a, n, MOD) << endl;
    }
    return 0;
}
