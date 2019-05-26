#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int lim = n;
    while(lim >= 0)
    {
        for(int i = 0; i < lim; i++)
            cout << "  " ;
        for(int i = 0; i <= n - lim; i++)
            cout << i << " ";
        for(int  i = (n-lim) - 1; i >= 0; i--)
            cout << i << " ";
       cout << endl;
        lim--;
    }
    int limit = 1;
    while(limit <= n)
    {
        for(int i = 0; i < limit; i++)
            cout << "  ";
        for(int i = 0; i <= (n - limit); i++)
            cout << i << " ";
        for(int i = (n- limit)- 1; i >= 0; i--)
            cout << i << " ";
        cout << endl;
        limit++;
    }

    return 0;
}
