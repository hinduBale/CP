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

        lli nCr(lli n, lli k)
        {
            if(n < k)
                return 0;
            else
            {
                lli res = 1;

                // Since C(n, k) = C(n, n-k)
                if ( k > n - k )
                    k = n - k;

                // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
                for (lli i = 0; i < k; ++i)
                {
                    res *= (n - i);
                    res /= (i + 1);
                }

                return res;
            }

        }

        vector <lli> v (500000000, 0);
        int main()
        {
            i_am_iron_man
            lli n, m, sum = 0;
            cin >> n >> m;
            lli res = n - m;
            if(res == 0)
                cout << "0 0" << endl;
            else
            {
                lli res1 = 1 + res;
                //cout << "res1 is " << res1 << endl;
                lli max_pair = nCr(res1, 2);
                //cout << "Max_pair is " << max_pair << endl;
        //        cout << "Initially vector v is " << endl;
        //        for(int i = 0; i < m; i++)
        //            cout << v[i] << " ";
        //        cout << endl;
                lli res2 = res / m;
                lli res3 = res % m;
        //        cout << "res2 and res3 is " << res2 <<" " <<res3;
                for(lli i = 0; i < m; i++)
                    v[i] += res2;
        //        cout << "Now vector v is " << endl;
        //        for(int i = 0; i < m; i++)
        //            cout << v[i] << " ";
        //        cout << endl;
                for(lli i = 0; i < res3; i++)
                    ++v[i];
        //        cout << "Now  after percentile vector v is " << endl;
        //        for(int i = 0; i < m; i++)
        //           cout << v[i] << " ";
        //        cout << endl;
                for(lli i = 0; i < m; i++)
                    sum += nCr(v[i], 2);
        //        cout << "sum is " << sum << endl;
                cout << sum << " " << max_pair << endl;
            }
            return 0;
        }
