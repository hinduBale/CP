//https://www.codechef.com/problems/SRTX16B

#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

void multiply(lli a[2][2], lli b[2][2])
{
    lli finalArr[2][2] = {{0,0}, {0,0}};
    finalArr[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
    finalArr[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
    finalArr[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0];
    finalArr[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1];

   a[0][0] = finalArr[0][0];
   a[0][1] = finalArr[0][1];
   a[1][0] = finalArr[1][0];
   a[1][1] = finalArr[1][1];

}

lli power(lli a[2][2], lli n)
{
    lli arr[2][2] = {{1, 1}, {1, 0}};
    for(lli i = 2; i < n; i++)
        multiply(a, arr);

}

lli fibo(lli n)
{
    lli arr[2][2] = {{1,1},{1,0}};
    if(n == 0 || n == 1)
        return 1;
    power(arr, n-1);

    //For this stupid question we require the f(n-1)th term, So....
    return arr[1][1]+arr[1][0];
}

int main()
{
    IOS
    lli arr[2][2] = {{1, 1}, {1, 0}};
    lli test;
    cin >> test;
    while(test--)
    {
        lli n;
        cin >> n;
        cout << fibo(n+1) << endl;
    }
    return 0;
}
