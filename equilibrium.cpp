/*
    7 2 4 5 1 3
    7+2=5+1+3 =>4 is equi
*/
#include <iostream>
using namespace std;
int equi(int a[], int n)
{
    int val = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int leftsum = 0;
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        if (leftsum == sum)
            return val = i;
        leftsum += a[i];
    }
    return val;
}
int main()
{
    // your code goes here
    int a[100000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val = equi(a, n);
    if (val)
        cout << a[val] << endl;
    else
        cout << "no equi" << endl;
    return 0;
}
