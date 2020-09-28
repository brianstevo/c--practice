#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " -> " << endl;
    }
}
void maxsum(vector<int> &a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] >= a[i + 1])
        {
            auto left = a;
            auto right = a;
            left.erase(left.begin() + i);
            right.erase(right.begin() + i + 1);
            print(left);
            print(right);
        }
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
    maxsum(a);
    // int val = maxsum(a, n);
    // cout << val << endl;
    return 0;
}