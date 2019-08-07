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
//Iski complexity BC O(n) hai, apparent from iterative solution.
bool isSubstring(string s1, string s2, int len1, int len2)
{
    if(len1 == 0)
        return true;
    if(len2 == 0)
        return false;
    if(s1[len1-1] == s2[len2-1])
        return isSubstring(s1, s2, len1-1, len2-1);
    return isSubstring(s1, s2, len1, len2-1);
}

int main()
{
    i_am_iron_man
    string s1, s2;
    cin >> s2 >> s1;
    int len1 = s1.length();
    int len2 = s2.length();
    if(isSubstring(s1, s2, len1, len2))
    {
        cout << "automaton" <<endl;
        return 0;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2)
    {
        cout << "array" << endl;
        return 0;
    }
    else if(isSubstring(s1, s2, len1, len2))
    {
        cout << "both" << endl;
        return 0;
    }
    else
        cout << "need tree" << endl;
    return 0;
}
