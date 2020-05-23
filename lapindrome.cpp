#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s1, s2;
        cin >> s;
        int mid = s.size() / 2;
        s1 = s.substr(0, mid);
        mid = (s.size() % 2 == 0) ? s.size() / 2 : s.size() / 2 + 1;
        s2 = s.substr(mid, s.size());
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}