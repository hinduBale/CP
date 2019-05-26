#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void sieve(lli limit, vector <lli> &prime)
{
    bool mark [limit+1];
    memset(mark, true, sizeof(mark));
    for(lli i = 2; i*i <= limit; i++)
    {
        if(mark[i])
        {
            for(lli j = 2*i; j < limit; j+=i)  //Yaha aaya halka sa change...Instead of i*i its 2*i
                mark[j] = false;
        }
    }
    for(lli i = 2; i < limit; i++)
    {
        if(mark[i])
        {
            cout << i << " " ;
            prime.pb(i);
        }
    }
}

void segmentedSieve(lli n)
{
    lli limit = floor(sqrt(n)) + 1;
    vector <lli> prime;
    sieve(limit, prime);

    lli low = limit;
    lli high = 2*limit; //This way the size of each segment is sqrt(n);

    while(low < n)
    {
        if(high >= n)
            high = n;
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));

        for(lli i = 0; i < prime.size(); i++)
        {
            lli lowLim = floor(low/prime[i])*prime[i];
            if(lowLim < low)
                lowLim += low;

            for(lli j = lowLim; j < high; j +=prime[i])
                mark[j-low] = false;
        }
        for(lli i = low; i < high; i++)
        {
            if(mark[i - low])
                cout << i << " ";
        }
        low += limit;
        high += limit;
    }

}

int main()
{
     //IOS
    lli n;
    cout << "Enter upper bound of list of prime numbers" << endl;
    cin >> n;
    segmentedSieve(n);
    return 0;
}
