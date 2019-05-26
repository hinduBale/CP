#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);


using namespace std;

vector <int> printDivisors(int n)
{
    vector<int> v;
     for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {

            if (n/i == i)
                v.pb(i);

            else
            {
                v.pb(i);
                v.pb(n/i);
                }

        }
    }
    sort(v.begin(), v.end());
    return v;
}

int main()
{
    int n, flag = 0, a , b;
    cin >> n;
    vector <int> V = printDivisors(n);
    for(lli i = 0; i < V.size(); i++)
    {
        if(V[i] >= 5)
        {
            for(lli j = i; j < V.size(); j++)
            {
                a = V[i] ;
                b = V[j] ;
                if(V[i]*V[j] == n && V[i] >= 5 && V[j] >= 5)
                    ++flag;
            }
        }
    }
    string s = "aeioueiouaiouaeouaeiuaeio";
    int k = 0;
    if(flag == 1)
    {
        for(int i = 0; i < n; i++)
        {
            if(a % 5 == 0 && b % 5 == 0)
            {
                cout << s[i%20];
            }
            else{
                cout << s[k];
                ++k;
                if(k == 5)
                    k = 0;
            }

        }
    }
    else
        cout << "-1" << endl;
    return 0;
}
