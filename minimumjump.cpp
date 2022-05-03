#include <iostream>
using namespace std;
// int mininumsum(int a[], int n)
// {
//     int t = 1;
//     int sum = 0;
//     // sum += a[2];
//     int i = 0;
//     // for (int j = 0; j < n; j++)
//     // {
//     //     cout << a[j];
//     // }
//     while (t)
//     {
//         if (!a[i + 2])
//         {
//             sum = sum + a[i];
//             t = 0;
//             break;
//         }
//         else if (a[i + 2] > sum)
//         {
//             sum = sum + a[i];
//             i += 2;
//         }

//         else
//         {
//             sum = sum + a[i];
//             i++;
//             /* code */
//         }
//     }

//     return sum;
// }
int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << n << "elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int ans = mininumsum(a, n);
    //
    int x, y, z;
    int t = 1;
    int sum = 0;
    int i = 0;
    while (t)
    {
        x = a[i + 2];
        y = a[i + 1];
        z = a[i - 1];
        if (x != 0)
        {
            cout << a[i] << "if x " << endl;
            sum = sum + a[i];
            i += 2;
        }
        else
        {
            cout << a[i] << "if not x " << endl;
            sum = sum + a[i];
            t = 0;
        }
        // else if (a[i + 2] > (a[i + 1] + a[i - 1]))
        // {
        //     sum = sum + a[i];
        //     i--;
        // }
        // else
        // {
        //     sum = sum + a[i];
        //     i = i + 2;
        // }
    }
    cout << sum << endl;
    return 0;
}
