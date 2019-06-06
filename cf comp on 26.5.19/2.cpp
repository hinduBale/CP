#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    lli n, m, a, b, flag = 0;
    cin >> n >> m;
    vector <lli> input [m+1];
    for(lli i = 0 ; i < m; i++)
    {
        cin >> a >> b;
        input[i].pb(a);
        input[i].pb(b);
    }
    lli cnt [n + 1] = {0};
    for(lli i = 0 ; i < m; i++)
    {
        cnt[input[i][0]]++;
        cnt[input[i][1]]++;
    }
    sort(cnt, cnt+(n+1));
    lli cnt1[n+1] = {0};
    for(lli i = n, j = 1; i >= 0, j <=n; i--, j++)
        cnt1[j] = cnt[i];
    vector <lli> res;
    for(lli i = 0; i < n + 1; i++)
        for(lli j = 0; j < n + 1; j++)
        {
            if(cnt[i] + cnt[j] >= m)
            {
                res.pb(cnt[i]);
                res.pb(cnt[j]);
            }
        }

    for(lli i = 0; i < res.size(); i = i + 2)
    {
        for(lli j = 0; j < m; j++)
        {
            if(input[j][0] == res[i] || input[j][1] == res[i] || input[j][1] == res[i+1] || input[j][1] == res[i+1])
                ++flag;
        }
        if(flag >= m)
        {
            cout << "YES" << endl;
            break;
        }
        else
            flag = 0;
    }
    if (flag == 0)
        cout << "NO" << endl;

    return 0;
}



