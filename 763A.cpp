#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define MOD 1000000007
#define f first
#define s second
#define inf INT_MAX
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    IOS
    int n, sum = 0, res = 0, flag = 0;
    cin >> n;
    int a[100010], b[100010], cnt[100010], c[100010];
    for(int i = 1; i < n; i++)
        cin >> a[i] >> b[i];
    for(int i = 1; i <= n; i++)
        cin >> c[i];
    for(int i = 1; i <= n; i++)
        if(c[a[i]] != c[b[i]])
        {
            cnt[a[i]]++;
            cnt[b[i]]++;
            sum++;
        }
    for(int i = 1; i <= n; i++)
    {
        if(cnt[i] == sum)
        {
            cout << "YES" <<endl;
            cout << i;
            return 0;
        }
    }
    cout << "NO" <<endl;
}
