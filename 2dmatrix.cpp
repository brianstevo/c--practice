#include <iostream>
#include <vector>
using namespace std;
void matrix(vector<int<int>> a, int n)
{
    for (auto x : a)
    {
        cout << x << " -> ";
    }
}
int main()
{
    // your code goes here
    int n, x;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    maxsum(a, n);
    // int val = maxsum(a, n);
    // cout << val << endl;
    return 0;
}