/*
small changes for primality test

*/
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void prime(vector<int> &a)
{
    cout << "hi prime" << endl;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        int j = 0;
        if (a[i] != 0)
        {
            j = i * i;
        }
        while (j <= 1000000)
        {
            a[j] = 0;
            j = j + i;
        }
    }
}
// void print(vector<int> &a, int n)
// {
//     cout << "hi print" << endl;
//     for (int i = 2; i < n; i++)
//     {
//         cout << a[i] << endl;
//     }
// }
int main()
{
    // your code goes here
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i <= 1000000; i++)
    {
        a.push_back(i);
    }
    prime(a);
    while (n--)
    {
        int x;
        cin >> x;
        cout << ((a[x] != 0) ? "yes its prime" : "not prime") << endl;
    }
    return 0;
}

//SOE basic

// #include <iostream>
// #include <vector>
// #include <math.h>
// using namespace std;
// void prime(vector<int> &a, int n)
// {
//     cout << "hi prime" << endl;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         int j = 0;
//         if (a[i] != 0)
//         {
//             j = i * i;
//         }
//         while (j <= n)
//         {
//             a[j] = 0;
//             j = j + i;
//         }
//     }
// }
// void print(vector<int> &a, int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (a[i])
//         {
//             cout << a[i] << endl;
//         }
//     }
// }
// int main()
// {
//     // your code goes here
//     int n;
//     cin >> n;
//     vector<int> a;
//     for (int i = 0; i <= n; i++)
//     {
//         a.push_back(i);
//     }
//     prime(a, n);
//     print(a, n);
//     // int val = maxsum(a, n);
//     // cout << val << endl;
//     return 0;
// }
