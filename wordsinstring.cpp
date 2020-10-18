//print and isPalindrome string
#include <iostream>
using namespace std;
int word(string n)
{
    int count=0;
    int flag=0;
    for (auto x:n){
        if(x!=' '){
            flag=1;
        }else{
            if(flag){
                count++;
                flag=0;
            }
        }
    }
    if(flag){
        count++;
    }
      
    return count;
}
int main()
{
    // your code goes here
    string n;
    getline(cin, n);
    int rev =word(n);
        cout << rev << endl;
    return 0;
}