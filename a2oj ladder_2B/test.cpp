//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string str1 = "45";
//    string str2 = "3.14159";
//    string str3 = "31337 geek";
//
//    int myint1 = stoi(str1);
//    int myint2 = stoi(str2);
//    int myint3 = stoi(str3);
//
//    cout << "stoi(\"" << str1 << "\") is "
//         << myint1 << '\n';
//    cout << "stoi(\"" << str2 << "\") is "
//         << myint2 << '\n';
//    cout << "stoi(\"" << str3 << "\") is "
//         << myint3 << '\n';
//
//    return 0;
//}
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    string numbers = "1234567890987654321";
//    char test;
//    test = 97;
////    cout << test << endl;
////    return 0;
////}
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    cout << 7880988%10 << endl;
//    cout << 7880988%100 << endl;
//    cout << 7880988%1000 << endl;
//    return 0;
//}
//#include<bits/stdc++.h>
//
//int main ()
//{
//    std::vector<int> vec { 30, 20, 30, 30, 30, 30, 40 };
//
//    // Iterator used to store the position
//    // of searched element
//    std::vector<int>::iterator it;
//
//    // Print Original Vector
//    std::cout << "Original vector :";
//    for (int i=0; i<vec.size(); i++)
//        std::cout << " " << vec[i];
//
//    std::cout << "\n";
//
//    // Element to be searched
//    int ser = 30;
//
//    // std::find function call
//    it = std::find (vec.begin(), vec.end(), ser);
//    if (it != vec.end())
//    {
//        std::cout << "Element " << ser <<" found at position : " ;
//        std:: cout << it - vec.begin() + 1 << "\n" ;
//    }
//    else
//        std::cout << "Element not found.\n\n";
//
//    return 0;
//}


//#include <bits/stdc++.h>
//#define lli long long int
//#define ulli unsigned long long int
//#define MOD 1000000007
//using namespace std;
//
//int main()
//{
//    lli x = -1;
//    cout << x << endl;
//    cout << ((x % MOD)+MOD)%MOD << endl;
//    return 0;
//}

//
//#include <bits/stdc++.h>
//#define pb push_back
//#define eb emplace_back
//
//using namespace std;
//
//int main()
//{
//    int input;
//    vector <int> v;
//    cout << "Enter numbers in the vector: " << endl;
//    while(cin >> input)
//        v.eb(input);
//    for(auto i: v)
//            cout << i << " ";
//    cout << endl;
//    return 0;
//}


    #include <cstdio>
    #include <cctype>
    #include <cassert>
    #include <cstring>
    #include <iostream>
    #include <algorithm>
    #define R register
    #define ll long long
    using namespace std;

    int n, a[210000];
    int main() {
        cin >> n;
        int maxPos = 0;
        for (int i = 1; i <= n; ++i)
            cin >> a[i], maxPos = a[maxPos] > a[i] ? maxPos : i;
//        for(auto i : a)
//            cout << i << " ";
//        cout << endl;
        for (int i = maxPos - 1; i >= 0; --i)
        {
            cout << "For i = " << i << "a[i] is: " << a[i] << endl;
            if (a[i+1] <= a[i])
                return printf("No"), 0;
        }

        for (int i = maxPos + 1; i <= n; ++i)
        {
            cout << "For i = " << i << "a[i] is: " << a[i] << endl;
            if (a[i-1] <= a[i])
                return printf("No"), 0;
        }
        printf("Yes");
        return 0;
    }
