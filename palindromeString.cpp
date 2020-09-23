//print and isPalindrome string
#include <iostream>
using namespace std;
string palind(string n)
{
    string rev;
    for (auto x : n)
        rev = x + rev;
    return rev;
}
int main()
{
    // your code goes here
    string n;
    getline(cin, n);
    string rev = palind(n);
    if (rev == n)
        cout << "pal" << endl;
    else
        cout << "not pal" << endl;
    return 0;
}