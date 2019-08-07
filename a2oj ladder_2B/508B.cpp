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

int main()
{
    i_am_iron_man
    vector <pii> even;
    vector <pii> odd;
    string input;
    cin >> input;
//    cout << input << endl;
    int n = input.length() - 1;
    char temp;
    char last = input.back();
    int ld = last - '0';
//    cout << "n and last: " << n << " " << last << endl;
    for(int i = 0; i < input.length(); i++)
        if(input[i] == '0' || input[i] == '2' || input[i] == '4' || input[i] == '6' || input[i] == '8')
        {
            int num_e = input[i] - '0';
            even.eb(mp(i, num_e));
        }
        else
        {
            int num_o = input[i] - '0';
            odd.eb(mp(i, num_o));
        }
    for(int i = 0; i < even.size(); i++)
    {
        cout << even[i].F << " " << even[i].S <<endl;
    }
    cout << endl;
    for(int i = 0; i < odd.size(); i++)
    {
        cout << odd[i].F << " " << odd[i].S <<endl;
    }
    cout << endl;
    if(even.empty() == true)
    {
        cout << "-1" << endl;
        return 0;
    }
    cout << "Even size is: " << even.size() << endl;
    for(int i = 0; i < even.size(); i++)
        if(even[i].S < ld)
        {
            cout << "even[i].S is: " << even[i].S << endl;
            cout << "And input[even[i].F] is: " << input[even[i].F]  << endl;
            temp = input[even[i].F];
            cout << "temp is: " << temp << endl;
            input[even[i].F] = input[n];
            input[n] = temp;
            cout << input << endl;
            return 0;
        }

    auto low_even = even.back();
    cout << low_even.F << " " << low_even.S << endl;
    input[low_even.F] = temp;
    input[low_even.F] = input[n];
    input[n] = temp;
    cout << input << endl;

    return 0;
}
