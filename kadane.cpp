////Brute force solution O(n^2)
//
/////*short and int: -32,767 to 32,767
////**unsigned short int and unsigned int: 0 to 65,535
////**long int: -2,147,483,647 to 2,147,483,647
////**unsigned long int: 0 to 4,294,967,295
////**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
////**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/
////
////#include <bits/stdc++.h>
////#define lli long long int
////#define pii pair<int, int>
////#define pb push_back
////#define mp make_pair
////#define eb emplace_back
////#define pf push_front
////#define MOD 1000000007
////#define F first
////#define S second
////#define inf INT_MAX
////#define gcd(x,y) __gcd(x,y)
////#define lcm(a,b) (a*(b/gcd(a,b)))
////#define i_am_iron_man ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
////
////using namespace std;
////
////template <class T>
////void view(vector<T> v)
////{
////    for(auto i: v)
////        cout << i << " ";
////    cout << endl;
////}
////template <class T>
////void view(T arr[], lli start, lli finish)
////{
////    for(lli i = start; i <= finish; i++)
////        cout << arr[i] << " ";
////    cout << endl;
////}
////template <class T>
////void view(T arr[], lli n)
////{
////    for(lli i = 0; i < n; i++)
////        cout << arr[i] << " ";
////    cout << endl;
////}
////
////int main()
////{
////    i_am_iron_man
////    int n;
////    cin >> n;
////    int A[n+1], S[n+1];
////    S[0] = 0;
////    for(int i = 1; i <= n; i++)
////        cin >> A[i];
////    for(int i = 1; i <= n; i++)
////        S[i] = S[i-1] + A[i];
////    cout << "The sum array is as follows: " << endl;
////    view(S, 1, n);
////    int max_sum = 0;
////    for(int i = 1; i <= n; i++)
////        for(int j = 0; j < i; j++)
////        {
////            int seg_sum = S[i] - S[j];
////            if(seg_sum > max_sum)
////                max_sum = seg_sum;
////        }
////    cout << max_sum << endl;
////    return 0;
////}
//
///*short and int: -32,767 to 32,767
//**unsigned short int and unsigned int: 0 to 65,535
//**long int: -2,147,483,647 to 2,147,483,647
//**unsigned long int: 0 to 4,294,967,295
//**long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
//**unsigned long long int: 0 to 18,446,744,073,709,551,615.*/
//
//#include <bits/stdc++.h>
//#define lli long long int
//#define pii pair<int, int>
//#define pb push_back
//#define mp make_pair
//#define eb emplace_back
//#define pf push_front
//#define MOD 1000000007
//#define F first
//#define S second
//#define inf INT_MAX
//#define gcd(x,y) __gcd(x,y)
//#define lcm(a,b) (a*(b/gcd(a,b)))
//#define i_am_iron_man ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
//using namespace std;
//
//template <class T>
//void view(vector<T> v)
//{
//    for(auto i: v)
//        cout << i << " ";
//    cout << endl;
//}
//template <class T>
//void view(T arr[], lli start, lli finish)
//{
//    for(lli i = start; i <= finish; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//template <class T>
//void view(T arr[], lli n)
//{
//    for(lli i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//int main()
//{
//    i_am_iron_man
//    cout << "Enter n: " << endl;
//    int n;
//    cin >> n;
//    int A[n];
//    for(int i = 0; i < n; i++)
//        cin >> A[i];
//
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;

// Returns true if s1 is substring of s2
//int isSubstring(string s1, string s2)
//{
//    int M = s1.length();
//    int N = s2.length();
//
//    /* A loop to slide pat[] one by one */
//    for (int i = 0; i <= N - M; i++) {
//        int j;
//
//        /* For current index i, check for pattern match */
//        for (j = 0; j < M; j++)
//            if (s2[i + j] != s1[j])
//                break;
//
//        if (j == M)
//            return i;
//    }
//
//    return -1;
//}

//bool isSubstring(string s, string sub)
//{
//    int a = s.length();
//    int b = sub.length();
//    for(int i = 0; i <= a-b; i++)
//    {
//        int j;
//        for(j = 0; j < b; j++)
//            if(sub[j] != sub[i+j])
//                break;
//        if(j == b)
//            return true;
//    }
//    return false;
//}
//
//
//
//int main()
//{
//    string a, b;
//    cin >>  a >> b;
//    if(isSubstring(a, b) == true)
//        cout << "NO" <<endl;
//    else
//        cout << isSubstring(a, b) << endl;
//    return 0;
//}



#include<iostream>
#include<cstring>
using namespace std;

bool isSubSequence(string str1, string str2, int m, int n)
{
    if (n == 0) return true;
    if (m == 0) return false;

    if (str2[n-1] == str1[m-1])
        return isSubSequence(str1, str2, m-1, n-1);

    return isSubSequence(str1, str2, m-1, n);
}

bool gfg(string str1, string str2, int m, int n)
{
    if(m == 0) return true;
    if(n == 0) return false;

    if(str1[m-1] == str2[n-1])
        return gfg(str1, str2, m-1, n-1);

    return gfg(str1, str2, m, n-1);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.length();
    int n = s2.length();
    isSubSequence(s1, s2, m, n)? cout << "Yes ":
                                     cout << "No";

    gfg(s2, s1, n, m)? cout << "Yes ":
                                     cout << "No";
    return 0;
}
