#include <iostream>
using namespace std;
int lcm(int n, int m)
{
    int max = n > m ? n : m;
    while (true)
    {
        if (max % n == 0 && max % m == 0)
            return max;
        else
            ++max;
    }
}
int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int val = lcm(n, m);
    cout << val << endl;
    return 0;
}