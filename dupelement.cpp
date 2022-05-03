#include <iostream>
#include <map>
#include <vector>
using namespace std;
int dup(vector<int> a)
{
    map<int, int> mp;
    for (auto x : a)
    {
        if (mp[x] == 1)
        {
            return x;
        }
        else
        {
            mp[x] = 1;
        }
    }
    return 0;
}
// int dup(map<int, int> a)
// {

//     for (auto x : a)
//     {
//         cout << x.first;
//     }
//     return 0;
// }
int main()
{
    int n, x;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    int val = dup(a);
    if (val != 0)
        cout << val << " is duplicate " << endl;
    else
        cout << "no duplicates" << endl;
    // your code goes here
    // int n;
    // cin >> n;
    // int x;
    // map<int, int> a;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> x;
    //     if (a[x] == 1)
    //     {
    //         cout << x << " is dup" << endl;
    //         exit(0);
    //     }
    //     else
    //     {
    //         a[x] = 1;
    //     }
    // }
    // for (auto i = a.begin(); i != a.end(); i++)
    // {
    //     cout << i->first << " -> " << i->second << endl;
    // }
    // cout << dup(a) << endl;
    // int val = maxsum(a, n);
    // cout << val << endl;
    return 0;
}