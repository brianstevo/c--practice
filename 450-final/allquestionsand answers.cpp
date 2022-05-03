#include <iostream>
using namespace std;

//reverse a string

string reverseWord(string str)
{

    string s;
    //Your code here
    for (auto x : str)
    {
        s = x + s;
    }
    return s;
}

// IN c style
string reverseWord(string str)
{
    string s = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        s += str[i];
    }
    return s;
}
// IN REVERSE AN ARRAY
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
//recursive
void rvereseArray(int arr[], int start, int end)
{
    int temp;
    if (start >= end)
        return;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    rvereseArray(arr, start + 1, end - 1);
}

//Move all negative numbers to beginning and positive to end with constant extra space

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            /*
                temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                */
            j++;
        }
    }
}

// find kth smallest element in unsorted array
// first apply nlogn sorting and print a[k];
// sort(arr,ar+n);
//print(arr[k]);