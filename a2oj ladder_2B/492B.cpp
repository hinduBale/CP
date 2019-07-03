//Learnt to set precison here, the keyword "fixed" has to be used before the keyword
//"setprecision(n)
//And, yes double is bigger than float!!

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
    lli n , l, input;
    double res = 0;
    cin >> n >> l;
    set <lli> lamps;
    for(lli i = 0; i < n; i++)
    {
        cin >> input;
        lamps.insert(input);
    }
    vector <double> v;
    for(auto i : lamps)
        v.eb(i);
    res = v[0];
    for(lli i = 0; i < v.size()-1; i++)
        if((-1*(v[i] - v[i+1]))/2 > res)
            res = (-1*(v[i] - v[i+1]))/2;
    if((l - *v.rbegin()) > res)
        res = l - *v.rbegin();
    cout << fixed << setprecision(9) << res << endl;
    return 0;
}
