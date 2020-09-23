#include <iostream>
#include <vector>
using namespace std;
void maxsum(vector<int> a, int n)
{
    cout << "hi" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout << "hi" << endl;
    for (auto x : a)
    {
        cout << x << " -> ";
    }
    cout << endl
         << "hi" << endl;
    for (auto x = a.begin(); x < a.end(); x++)
    {
        cout << *x << " ";
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