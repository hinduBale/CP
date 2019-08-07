///*short and int: -32,767 to 32,767
//**unsigned short int and unsigned int: 0 to 65,535
//**long int: -2,147,483,647 to 2,147,483,647
//**unsigned long int: 0 to 4,294,967,295
//**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
//**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/
//
//#include <bits/stdc++.h>
//#define lli long long int
//#define pii pair<int, int>
//#define pb push_back
//#define mp make_pair
//#define eb emplace_back
//#define pf push_front
//#define MOD 1000000007
//#define F first
//#define S second
//#define inf INT_MAX
//#define gcd(x,y) __gcd(x,y)
//#define lcm(a,b) (a*(b/gcd(a,b)))
//#define i_am_iron_man ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
//using namespace std;
//
//int main()
//{
//    i_am_iron_man
//    int test;
////    cin >> test;
//    test = 1;
//    while(test--)
//    {
//        lli n, input, big = 0, big_index = 0;
//        cin >> n;
//        vector <lli> poles;
//        for(lli i = 0; i < n; i++)
//        {
//            cin >> input;
//            if(input > big)
//            {
//                big = input;
//                big_index = i;
//            }
//            poles.eb(input);
//        }
////        for(auto i : poles)
////            cout << i << " ";
////        cout << endl;
//        if(big_index == n-1)
//        {
//            for(lli i = 0; i < poles.size()-1; i++)
//                if(poles[i] >= poles[i+1])
//                {
//                    cout << "NO"<< endl;
//                    return 0;
//                }
//            cout << "YES" << endl;
//        }
//        else if(big_index == 0)
//        {
//            for(lli i = 0; i < poles.size()-1; i++)
//                if(poles[i] <= poles[i+1])
//                {
//                    cout << "NO" << endl;
//                    return 0;
//                }
//            cout << "YES" << endl;
//        }
//        else
//        {
//            for(lli i = 0; i < big_index; i++)
//                if(poles[i] >= poles[i+1])
//                {
//                    cout << "NO" << endl;
//                    return 0;
//                }
//            for(lli i = big_index; i < poles.size()-1; i++)
//                if(poles[i] <= poles[i+1])
//                {
//                    cout << "NO" << endl;
//                    return 0;
//                }
//            cout << "YES" << endl;
//        }
//    }
//    return 0;
//}
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
    lli n, index = 0, input, big = 0;
    cin >> n;
    lli poles[100010];
    for(lli i = 1; i <= n; i++)
    {
        cin >> poles[i];
        if(poles[i] > big)
        {
            big = poles[i];
            index = i;
        }
    }
    for(lli i = index - 1; i; i--)
        if(poles[i+1] <= poles[i])
            return cout << "NO" , 0;
    for(lli i = index+1; i <=n; i++)
        if(poles[i] >= poles[i-1])
            return cout << "NO" , 0;
    cout << "YES" << endl;
    return 0;
}
