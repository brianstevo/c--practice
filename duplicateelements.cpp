#include <iostream>
#include <vector>
using namespace std;
void anime(int a[], int n)
{
    int temp[100];
    vector<int> real;
    vector<int> dup;
    for (int i = 0; i < n; i++)
    {
        if (temp[a[i]] == 1)
        {
            dup.push_back(a[i]);
        }
        else
        {
            temp[a[i]] = 1;
            real.push_back(a[i]);
        }
    }
    for (auto x : real)
    {
        cout << x << "---->";
    }

    cout << endl;
    for (auto x : dup)
    {
        cout << x << "---->";
    }
    cout << endl;
}
int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    anime(a, n);
    return 0;
}
