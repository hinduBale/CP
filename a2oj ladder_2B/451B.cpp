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
    lli n, inc_flag = 1, start = 0, finish = -1;
    lli arr[100010];
    cin >> n;
    for(lli i = 0; i < n; i++)
        cin >> arr[i];
//    for(lli i = 0; i < (n - 1); i++)
//        cout << arr[i] << " ";
//    cout << endl;
    for(lli i = 0; i < (n - 1); i++)
        if(arr[i] < arr[i+1])
            ++inc_flag;
        else
        {
            start = i;
            break;
        }
//    cout << start << endl;
    for(lli i = start; i < (n-1); i++)
        if(arr[i] < arr[i+1])
        {
            finish = i;
            break;
        }
    if((n-1) > (finish+1) and finish != -1)
        for(lli i = finish+1; i < n-1; i++)
            if(arr[i] > arr[i+1])
            {
                cout << "no" << endl;
                return 0;
            }
    else if((n-1) == (finish+1) and finish != -1)
        if(arr[finish + 1] > arr[finish+2])
        {
            cout << "no" << endl;
            return 0;
        }
//    cout << finish<< " ";
//    cout << endl;
//    cout << arr[start] << " " << arr[finish+1] << endl;
    if(arr[start] < arr[finish + 1])
        cout << "yes" << endl << ++start << " " << ++finish << endl;
    else if(finish == -1)
        if(start == 0)
            cout << "yes" << endl << ++start << " " << n << endl;
        else
            if(arr[n-1] > arr[start-1])
                cout << "yes" << endl << ++start << " " << n << endl;
            else
                cout << "no" << endl;
    else if(inc_flag == n and finish == -1)
        cout <<"yes" << endl << "1 1" << endl;
    else
        cout << "no" << endl;
    return 0;
}
