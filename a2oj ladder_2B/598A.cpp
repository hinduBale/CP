/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

#include <bits/stdc++.h>
#define lli long long int
#define pii pair<int, int>
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
#define i_am_iron_man ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main()
{
    i_am_iron_man
    lli put = 0;
    vector <lli> sub(32);
    for(lli i = 0; i <= 30; i++)
    {
        put = pow(2, i);
        sub.eb(put);
    }
    short int test;
    cin >> test;
    while(test--)
    {
        lli n, sum = 0;
        cin >> n;
        sum = (n * (n+1))/2;
        for(lli i = 0; i < sub.size(); i++)
            if(sub[i] <= n)
                sum -= (2*sub[i]);
        cout << sum << endl;
    }
    return 0;
}
