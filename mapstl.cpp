#include <iostream>
#include <map>
using namespace std;
int main()
{
    // your code goes here
    map<int, int> mp;
    mp.insert({1, 1});
    for (auto i = 0; i < 10; i++)
    {
        mp[i] = i;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }
    return 0;
}

/*
Integer map
int main()
{
    // your code goes here
    map<int, int> mp;
    mp.insert({1, 1});
    for (auto i = 0; i < 10; i++)
    {
        mp.insert({i, i});
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }
    return 0;
}
*/