/*
is it possible to make word from given characters 
you got array of words and string of chars
*/
#include <iostream>
#include <vector>
using namespace std;
int numberofwordspossible(vector<string> &words, string chars)
{
    int counter[26] = {};
    int size = sizeof(counter) / sizeof(counter[0]);
    int numberofwords = 0;
    for (int i = 0; i < chars.length(); i++)
    {
        int index = chars[i] - 'a';
        counter[index]++;
    }

    for (int i = 0; i < words.size(); i++)
    {
        int temptracker[26];
        for (int i = 0; i < size; i++)
        {
            temptracker[i] = counter[i];
        }
        string word = words[i];
        int flag = 0;

        for (int i = 0; i < word.size(); i++)
        {
            int index = word[i] - 'a';
            if (temptracker[index] == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                temptracker[index]--;
            }
        }
        if (flag == 0)
        {
            numberofwords++;
        }
    }
    return numberofwords;
}
int main()
{
    // your code goes here
    string chars;
    getline(cin, chars);
    vector<string> words;

    int n;
    cin >> n;
    string x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        words.push_back(x);
    }
    int val = numberofwordspossible(words, chars);
    cout << val << endl;
    return 0;
}
