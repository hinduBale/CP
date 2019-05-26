#include<iostream>
#include<cmath>
#define lli long long int
#define ld long double
#define MOD 1000000007
#define endl "\n"

using namespace std;

lli  fib(lli n) {
  ld phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

int main ()
{
  lli test;
  cin >> test;
  while(test--)
  {
      lli n;
      cin >> n;
      cout << (fib(n)) % MOD << endl;
  }
  return 0;
}
