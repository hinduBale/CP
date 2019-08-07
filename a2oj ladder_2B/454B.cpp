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
        lli n, input, min_entry = inf, min_index = 0, flag = 0;
        vector <lli> raw;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> input;
            if(input < min_entry)
            {
                min_entry = input;
                min_index = i;
            }
            raw.eb(input);
        }
        if(min_index == (n-1))
        {
            cout << "-1" << endl;
            return 0;
        }
        for(int i = min_index; i < raw.size()-1; i++)
            if(raw[i] <= raw[i+1])
                ++flag;
        if(min_index > 1)
        {
            for(int i = 0; i < min_index-1; i++)
                if(raw[i] <= raw[i+1])
                    ++flag;
        }

        if(flag == n-2)
            cout << (n - min_index)%n << endl;
        else
            cout << "-1" << endl;
        return 0;
    }
