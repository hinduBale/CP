/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

#include <bits/stdc++.h>
#define lli long long int
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define pf push_front
#define MOD 1000000007
#define F first
#define S second
#define inf INT_MAX
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define i_am_iron_man ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

bool rec_bin_search(lli x[], int key, int l, int r)
{
    while(l <= r)
    {
        lli mid = (l+r)/2;
        if(x[mid] == key)
            return true;
        else if(x[mid] > key)
            rec_bin_search(x, key, mid+1, r);
        else if(x[mid < key])
            rec_bin_search(x, key, 0, mid-1);
    }
    return false;
}

int main()
{
    i_am_iron_man
    lli n, key = 0;
    cout << "Enter number of elements" << endl;
    cin >> n;
    lli a[n];
    for(lli i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    cout << "Enter number to be searched: " << endl;
    cin >> key;
    if(rec_bin_search(a, key, 0, n-1) == true)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
