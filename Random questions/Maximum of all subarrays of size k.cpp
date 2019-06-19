#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define MOD 1000000007
#define F first
#define S second
#define inf INT_MAX
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define bring_back_deepak_mehta ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main()
{
    bring_back_deepak_mehta
    int test;
    cin >> test;
    while(test--)
    {
       int cnt = 0;
       vector <int> v, res;
       int n, k;
       cin >> n >> k;
       for(int i = 0; i < n; i++)
       {
           int input;
           cin >> input;
           v.eb(input);
       }
       for(int i = cnt; i <cnt + k; i++)
       {
           if(cnt >= (n-k+1))
              break;
           else
           {
               set <int> s (v.begin()+cnt, v.begin()+(cnt+k));
               res.eb(*--s.end());
               ++cnt;
           }
       }
       for(int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
       cout << endl;
    }
    return 0;
}
