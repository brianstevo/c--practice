/*
divide coin(n) into n/2 n/3 n/4 and print if profit(add n/2,3,4 and should be more than n) or not?
*/
#include <iostream>
using namespace std;
int divide(int n)
{
    return n / 2 + n / 3 + n / 4;
}
int main()
{
    // your code goes here
    int n;
    cin >> n;
    int val = divide(n);
    if (val > n)
        cout << val << endl;
    else
        cout << n << endl;
    return 0;
}