#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int

using namespace std;

lli fastExpo(lli a, lli b)
{
	lli res = 1;
	while(b > 0)
	{
		if(b & 1)
			 res *= a;
	    a *= a;
	    b = b >> 1;
	}
	return res;
}

int main()
{
	lli a, b;
	cout << "For a^b, enter the values of a and b" << endl;
	cin >> a >> b;
	cout << fastExpo(a, b)<< endl;
	return 0;
}
