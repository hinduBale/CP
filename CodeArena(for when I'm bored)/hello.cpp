#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
#define endl "\n"
#define mp make_pair
#define pb push_back

using namespace std;


lli countNonEmptySubstr(string str)
{
   lli n = str.length();
   return n*(n+1)/2;
}

int main()
{
	lli test;
	cin >> test;
	while(test--)
	{
	    lli count = 0;
	    string s;
	    cin >> s;
	    for(lli i = 0; i < s.size(); i++)
	    {
	        if(s[i] == 'z' || s[i] == 'a')
	        {
	            ++count;
	            s[i] = 'a';
	        }
	    }
	    sort(s.begin(), s.end());
	    lli ans = 0;
	    for(lli i = 0; i < count; i++)
	    {
	        ans += countNonEmptySubstr(s);
	        s.erase(s.begin() + count);
	    }
	    cout << ans << endl;
	}
	return 0;
}
