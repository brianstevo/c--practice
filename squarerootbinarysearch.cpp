#include <iostream>
using namespace std;
int binary(int n)
{
    int mid = 0;
    int l = 0, h = n;
    while (h - l > 1)
    {
        mid = (l + h) / 2;
        if (mid * mid <= n)
        {
            l = mid;
        }
        else
        {
            h = mid;
        }
    }
    return l;
}
int main()
{
    // your code goes here
    int n;
    cin >> n;
    int val = binary(n);
    cout << val << endl;
    return 0;
}
