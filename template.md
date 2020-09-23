#include <iostream>
using namespace std;
int maxsum(int a[], int n)
{
int val=0;
return val;
}
int main()
{
// your code goes here
int a[100], n;
cin >> n;
for (int i = 0; i < n; i++)
{
cin >> a[i];
}
int val = maxsum(a, n);
cout << val << endl;
return 0;
}

#include <iostream>
using namespace std;
int main()
{
// your code goes here
int a[100], n;
cin >> n;
for (int i = 0; i < n; i++)
{
cin >> a[i];
}
cout << val << endl;
return 0;
}

#include <iostream>
using namespace std;
int fact(int n)
{
if (n <= 1)
return 1;
else
return n \* fact(n - 1);
}
int main()
{
// your code goes here
long long int n;
cin >> n;
long long int val = fact(n);
cout << val << endl;
return 0;
}
