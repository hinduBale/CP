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

template <class T>
void view(vector<T> v)
{
    for(auto i: v)
        cout << i << " ";
    cout << endl;
}
template <class T>
void view(T arr[], lli start, lli finish)
{
    for(lli i = start; i <= finish; i++)
        cout << arr[i] << " ";
    cout << endl;
}
template <class T>
void view(T arr[], lli n)
{
    for(lli i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    i_am_iron_man
    int a, b, c, input = 0,add = 0, sum = 0;
    vector <int> v;
    for(int i = 0; i < 9; i++)
    {
        cin >> input;
        v.eb(input);
    }
    for(int i = 0; i <  9; i++)
        if(!(i == 0 || i == 4 || i == 8))
            add += v[i];
    sum = add/2;
    v[0] = sum - v[1] - v[2];
    v[4] = sum - v[3] - v[5];
    v[8] = sum - v[6] - v[7];
    for(int i = 0; i < 9; i++)
    {
        if(i%3 == 0)
            cout << endl;
        cout << v[i] << " ";
    }
    return 0;
}

