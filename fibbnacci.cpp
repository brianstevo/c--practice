#include <iostream>
using namespace std;
int fibb(int n)
{
    if (n <= 1)
        return n;
    else
        return fibb(n - 1) + fibb(n - 2);
}
int main()
{
    // your code goes here
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = sum + fibb(i);
        cout << fibb(i) << " -> ";
    }
    cout << "total -> " << sum << endl;
    return 0;
}