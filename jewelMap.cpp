#include <iostream>
#include <map>
using namespace std;
void jewel(map<char, int> &mp, string n)
{
    for (auto x : n)
    {
        mp.insert({x, 1});
    }
}
int stone(map<char, int> mp, string n)
{
    int sum = 0;
    for (auto x = 0; x < n.length(); x++)
    {
        if (mp[n[x]] == 1)
        {
            sum += 1;
        }
    }
    return sum;
}
void print()
{
}
int main()
{
    map<char, int> mp;
    // your code goes here
    string jewl;
    string stne;
    getline(cin, jewl);
    getline(cin, stne);
    // for (auto x : jewl)
    // {
    //     mp.insert({x, 1});
    // }
    jewel(mp, jewl);
    cout << stone(mp, stne) << endl;
    // for (auto x = mp.begin(); x != mp.end(); x++)
    // {
    //     cout << x->first << " -> " << x->second << endl;
    // }
    return 0;
}