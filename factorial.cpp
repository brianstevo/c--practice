#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    // your code goes here
    long long int n;
    cin >> n;
    long long int val = fact(n);
    cout << val << endl;
    return 0;
}