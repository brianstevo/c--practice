#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int rev = 0;
        cin >> n;
        while (n)
        {
            int rem = n % 10;
            rev = 10 * rev + rem;
            n = n / 10;
        }
        cout << rev << endl;
    }
    return 0;
}