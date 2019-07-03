#include <bits/stdc++.h>
#define lli long long int
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
        lli k, res = 0;
        cin >> k;
        lli lund = pow(10, k);
        for(int i = 0; i < lund; i++)
        {
            lli flag = 0;
            bool visited[10] = {0};
            lli fuckU = i;
            while(fuckU != 0)
            {
                if(visited[fuckU%10] == false)
                {
                    visited[fuckU%10] == true;
                    ++flag;
                }
                else
                    continue;
                fuckU /= 10;
            }
            lli other = lund - 1 - i;
            while(other != 0)
            {
                if(visited[other%10] == false)
                {
                    visited[other%10] == true;
                    ++flag;
                }
                else
                    continue;
                other = other / 10;
            }
            if (flag == 2)
                ++res;
        }
        cout << res << endl;
    }
    return 0;
}
