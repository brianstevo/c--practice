//print and isPalindrome string
#include <iostream>
using namespace std;
string palind(string n)
{
    string rev, temp;
    for (auto x : n)
    {
        if (x == ' ')
        {
            temp = temp + rev + x;
            rev = "";
        }
        else
        {
            rev = x + rev;
        }
    }
    temp += rev;
    return temp;
}
int main()
{
    // your code goes here
    string n;
    getline(cin, n);
    string rev = palind(n);
    cout << rev << endl;
    return 0;
}