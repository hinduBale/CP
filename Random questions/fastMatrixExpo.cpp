/*Rajesh is a very brilliant student. He likes sequences a lot specially the fibonacci sequence.
The fibonacci sequence is shown below
1 1 2 3 5 8 ...
Today Rajesh friend Saket gave him a problem on fibonacci sequences.

The problem is to find the N'th fibonacci number given N.
As this number can be very very large, Saket just need the n'th fibonacci number MOD 1000000007.

Since Rajesh is a genious at fibonacci sequences, he considers this as a pretty easy problem and asks you to solve it as he is feeling sleepy.

Can you solve the problem before Rajesh wakes up.

Hint: Recall the matrix form of the fibonacci numbers.*/

#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;

typedef vector <vector <lli>> matrix;

matrix multiply (matrix A, matrix B)
{
    matrix C(2, vector<lli> (2)); //To initialize the 2D vector of m*n(2*2)
    for(lli i = 0; i < 2; i++)
        for(lli j = 0; j < 2; j++)
            for(lli k = 0; k < 2; k++)
                C[i][j] = (C[i][j]+ A[i][k] * B[k][j]) % MOD ;
    return C;
}

matrix power(matrix A, lli n)
{
    if(n == 1)
        return A;
    matrix result{{1, 0}, {0, 1}}; //{{1,0}, {0, 1}} is an identity matrix
    vector <matrix> jaadu;
    jaadu.pb(A);
    while(n > 0)
    {
        if(n & 1)
            result = multiply(result, A);
        A = multiply(A, A);
        jaadu.pb(A);
        n >>= 1;
    }
    return result;
}

int main()
{
    lli test, n = 0;
    cin >> test;
    while(test--)
    {
        cin >> n;
        if(n == 0 || n == 1)
            return n;

        matrix A{{0, 1}, {1, 1}};
        A = power(A, (n-1));
        cout << ((A[0][0]+A[0][1])%MOD) << endl;
    }
    return 0;
}
