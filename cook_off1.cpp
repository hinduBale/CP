/*short and int: -32,767 to 32,767
**unsigned short int and unsigned int: 0 to 65,535
**long int: -2,147,483,647 to 2,147,483,647
**unsigned long int: 0 to 4,294,967,295
**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/

#include <bits/stdc++.h>
#define lli unsigned long long int
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
#define bring_back_deepak_mehta ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    bring_back_deepak_mehta
    int test;
    cin >> test;
    while(test--)
    {
        vector <float> v = {1, 2, 3 ,4,5 ,6 ,7 ,8 ,9,20,45, 45, 75,853,75};
        cout << *v.rbegin() << endl;
        for(int i = 2; i < 3; i++)
            cout << "Balle Balle" << endl;
    }
    return 0;
}
