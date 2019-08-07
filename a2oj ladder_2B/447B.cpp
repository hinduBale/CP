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

bool compare_second_element(pair<char, int> a, pair<char, int> b)
{
    return a.S > b.S;
}

int main()
{
    i_am_iron_man
    map<char, int> code;
    string input;
    cin >> input;
    int k, val;
    lli res = 0;
    cin >> k;
    for(int i = 97; i <=122; i++)
    {
        cin >> val;
        code[i] = val;
    }
    for(int i = 0; i < input.length(); i++)
        res += code[input[i]]*(i+1);
    vector <pair <char, int>> vector_code;
    for(auto it = code.begin(); it != code.end(); it++)
        vector_code.eb(*it);
    sort(vector_code.begin(), vector_code.end(), compare_second_element);
    for(int i = input.length()+1; i <= input.length()+k; i++)
        res += vector_code[0].S*i;
    cout << res << endl;
    return 0;
}
