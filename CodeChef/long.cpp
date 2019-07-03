/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

#include <bits/stdc++.h>
#define lli unsigned long long int
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
        lli n,N, k, res = 0, x ,d,an;
        cin >> n >> k;
        res = (k - 1)%MOD;
        x = (k-n)%(n-1);
        d=n-1;
        an=k-n;
        N=((an-x)/d)+1;
        if(k <= n)
            cout << res << endl;
        else
        {
        res=(res+(((lli)500000004%MOD)*((N%MOD)*((an%MOD+x%MOD)%MOD)%MOD)))%MOD;
        cout<<res%MOD<<endl;
        }
    }

    return 0;
}
