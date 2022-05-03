#include <iostream>
using namespace std;
void pyramid(int n)
{
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        space--;
    }
    space = 1;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        space++;
    }
}
int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    pyramid(n);
    return 0;
}
