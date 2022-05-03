#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // your code goes here
    vector<string> words;

    int n;
    cin >> n;
    string chars;
    for (int i = 0; i < n; i++)
    {
        cin >> chars;
        words.push_back(chars);
    }
    for (auto x : words)
    {
        cout << x << endl;
    }

    return 0;
}
