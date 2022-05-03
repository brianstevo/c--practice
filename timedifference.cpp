//print and isPalindrome string
#include <iostream>
using namespace std;
int conv(string n)
{
    if (n.size() == 8)
    {
        n.replace(5, 1, "");
        n.replace(2, 1, "");
    }
    else
    {
        n.replace(4, 1, "");
        n.replace(1, 1, "");
    }

    return stoi(n);
}
string time(string s, string t)
{
    int t2 = conv(s);
    int t1 = conv(t);
    cout << "t" << t1 << t2 << endl;
    int h = t2 / 10000 - t1 / 10000 - 1;
    cout << "h" << h << endl;
    int m1 = (t1 / 100) % 100;
    int m2 = (t2 / 100) % 100;
    cout << "m12" << m1 << "" << m2 << endl;
    int m = m2 % 100 + (60 - m1 % 100) - 1;
    cout << "m" << m << endl;
    int sec = t2 % 100 + (60 - t1 % 100);
    cout << "sec" << sec << endl;
    if (sec >= 60)
    {
        m++;
        sec = sec - 60;
    }
    cout << "secs" << sec << endl;
    if (m >= 60)
    {
        h++;
        m = m - 60;
    }
    cout << "ms" << m << endl;
    cout << "hs" << h << endl;
    string res = to_string(h) + ':' + to_string(m) + ':' + to_string(sec);
    return res;
}
int main()
{
    // your code goes here
    string n;
    getline(cin, n);
    string m;
    getline(cin, m);
    string val = time(n, m);
    cout << val << endl;
    return 0;
}