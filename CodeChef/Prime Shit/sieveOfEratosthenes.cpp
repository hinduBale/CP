//Some brilliant sources: https://www.youtube.com/watch?v=Xxu95iiVcPI
//Another is of course GfG...

//Time Complexity is the stupid O(n log(log(n)))

#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void sieve(lli n)
{
    bool prime[n+1] ;
    memset(prime, true, sizeof(prime));
    for(lli i = 2; i*i <= n; i++)
    {
        if(prime[i])
        {
            for(lli j = i*i; j <= n; j= j+i) //Numbers which are multiples of i and less than i*i have already been marked.. Chill.
                prime[j] = false;
        }
    }
    //printing all the primes now(primes are those numbers that still have prime[number] == true.
    for(lli i = 2; i <= n; i++)
    {
        if(prime[i])
            cout << i << endl;
    }

}

int main()
{
    //IOS
    lli n;
    cout << "Enter upper bound of list of prime numbers" << endl;
    cin >> n;
    sieve(n);
    return 0;
}


