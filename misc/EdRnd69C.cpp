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


//BC ye chutiya sawal actual rounds mein kyu nai bante!!!
int main()
{
    i_am_iron_man
    lli n, k, res = 0;
    cin >> n >> k;
    lli a[n];
    vector <lli> v;
    for(lli i = 0; i < n; i++)
        cin >> a[i];
//    for(auto i : a)
//        cout << i << " ";
//    cout << endl;
    //Sorted in ascending order, by default:
    for(int i = 1; i < n; i++)
        v.eb(a[i-1]-a[i]);
//    for(auto i : v)
//        cout << i << " ";
//    cout << endl;
    sort(v.begin(), v.end());
    for(int i =0; i < k-1; i++)
        res += v[i];
    res += a[n-1] - a[0];
    cout << res << endl;
    return 0;
}
