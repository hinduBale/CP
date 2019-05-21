#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"

using namespace std;

int main()
{
    lli n, k;
    cin >> n >> k;
    lli a[110], b[110] = {0};
    set <lli> se;
    set <lli>:: iterator it;
    for(lli i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
        ++b[a[i]];
    }
    lli q = 0;
    if(se.size() >= k)
    {
        cout << "YES" << endl;
        for(lli i = 0; i < n && q < k; i++)
        {
            if(b[a[i]] != 0)
            {
                cout << i+1 << " ";
                q++;
            }

        }
    }
    else
        cout <<"NO" << endl;

    return 0;
}
