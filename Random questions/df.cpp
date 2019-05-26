#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);


using namespace std;


lli binomialCoeff(lli n, lli k)
{
    lli C[k+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;  // nC0 is 1

    for (lli i = 1; i <= n; i++)
    {
        // Compute next row of pascal triangle using
        // the previous row
        for (lli j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }
    return C[k];
}
int main()
{
        IOS
        lli arr [26] = {0};
        lli n, res = 0;
        cin >> n;
        for(lli i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            ++arr[s[0]-'a'];
        }
//        for(lli i = 0; i < 26; i++)
//            cout << arr [i] << endl;
        for(lli i = 0; i < 26; i++)
        {
            if(arr[i] > 1)
            {
//                cout << "*******************" << endl;
//                cout << i << endl;
                if(arr[i] % 2 == 0)
                {
                    res +=2*(binomialCoeff(arr[i]/2, 2));
                }
                else
                {
                    if(arr[i] == 3)
                        res += 3;
                    else{
                        res += binomialCoeff((arr[i])/2, 2);
                        res += binomialCoeff(((arr[i])/2 + 1), 2);
                   }
                }
            }
        }
        cout << res << endl;
    return 0;
}
