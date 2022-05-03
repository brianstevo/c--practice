#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    if (m == 0)
        return n;
    return gcd(m, n % m);
}
int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int val = gcd(n, m);
    cout << val << endl;
    return 0;
}