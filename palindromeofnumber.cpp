//print and isPalindrome
#include <iostream>
using namespace std;
int palind(int n)
{
    int rem = 0, digit = 0;
    while (n > 0)
    {
        digit = n % 10;
        rem = (rem * 10) + digit;
        n = n / 10;
    }
    return rem;
}
int main()
{
    // your code goes here
    int n;
    cin >> n;
    int val = palind(n);
    if (val == n)
        cout << "pal" << endl;
    else
        cout << "not pal" << endl;
    return 0;
}