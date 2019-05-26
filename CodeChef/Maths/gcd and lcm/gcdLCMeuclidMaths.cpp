#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"

using namespace std;

//When one of the numbers is zero, while the other is non-zero, their greatest common divisor, by definition, is the second number. When both numbers are zero, their greatest common divisor is undefined (it can be any arbitrarily large number), but we can define it to be zero. Which gives us a simple rule: if one of the numbers is zero, the greatest common divisor is the other number.

lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}

//OR
//
//lli gcd(lli a, lli b)
//{
//    while(b)
//    {
//        a = a % b;
//        swap(a, b);
//    }
//    return a;
//}

lli lcm(lli a, lli b)
{
    return (a/gcd(a, b))*b;
}
int main()
{
    lli test;
    cin >> test;
    while(test--)
    {
        lli a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b)<< endl;
    }
    return 0;

}
