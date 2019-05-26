#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007

using namespace std;

int main()
{
    lli t;
    cin >> t;
    while(t--)
    {
        lli n, rFlag = 0, cFlag = 0;
        cin >> n;
        lli A[n][n] = {0};
        for(lli i = 0; i < n; i++)
        {
            for(lli j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }
        for(lli i = 0; i < n ; i++)
            for(lli j = 0; j < n; j++)
            {
                if(A[i][j] == 0)
                    ++rFlag;
            }

        for(lli j = 0; j < n ; j++)
            for(lli i = 0; i < n; i++)
            {
                if(A[i][j] == 0)
                    ++cFlag;
            }

        if(cFlag >= n && rFlag >= n)
                cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

