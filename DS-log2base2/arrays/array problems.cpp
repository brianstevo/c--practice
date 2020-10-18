//function only
//remove duplicates from sorted array and return
int rmDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;
    int len = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[len++] = arr[i];
        }
    }
    arr[len++] = arr[n - 1];
    return len;
}

//Rotate an Array by K Positions
void rightRotate(int arr[], int n)
{
    int temp = arr[n - 1], i;

    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = temp;
}

void arrayRotate(int arr[], int n, int k)
{
    int i;

    for (i = 1; i <= k; i++)
        rightRotate(arr, n);
}
