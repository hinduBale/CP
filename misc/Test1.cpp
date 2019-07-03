#include <iostream>
#define lli long long int
#define mod 1000000007

using namespace std;

lli expo(lli x, lli n, lli M)
{
    if(n == 0)
        return 1;
    else if(n % 2 == 0)
        return expo((x*x)%M, n/2, M);
    else
        return (x*expo((x*x)%M, (n-1)/2, M))%M;
}

int modInv(int A, int M)
{
    return expo(A, M-2, M);
}

int main()
{
    cout<<modInv(2,mod);
    return 0;
}
