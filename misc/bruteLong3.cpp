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

int main()
{
    IOS
    lli test;
    cin >> test;
    while(test--){
    lli k;
    cin >> k;
    lli res = 0;
    lli last = pow(10, k);
    for(lli i = 0; i < last; i++)
    {
        bool visited[10] = {false};
        lli flag = 0, dup = 0;
        dup = i;
        lli rest = (last-1-i);
        if(i == 0 or rest == 0)
            ++flag;
        while(dup != 0)
        {
            if(!visited[dup%10])
            {
                visited[dup%10] = true;
                ++flag;
            }
            dup = dup / 10;
        }

        while(rest != 0)
        {
            if(!visited[(rest)%10])
            {
                visited[(rest)%10] = true;
                ++flag;
            }
            rest = rest/10;
        }
        if(flag == 2)
            ++res;
    }
    cout << res <<endl;
    }
    return 0;
}
