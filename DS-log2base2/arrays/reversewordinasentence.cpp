int length(char str[])
{
    int len;

    for (len = 0; str[len]; len++)
        ;

    return len;
}

void reverse(char str[], int start, int end)
{
    int i;

    while (start < end)
    {
        char temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}

void reverse_words(char str[])
{
    int i, wstart = 0;
    int len = length(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str, wstart, i - 1);
            wstart = i + 1;
        }
    }

    reverse(str, wstart, len - 1);
}
//Reverse a string without affecting special characters
/* Solution */

int length(char str[])
{
    int len;

    for (len = 0; str[len]; len++)
        ;

    return len;
}

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

int isAlphabet(char ch)
{
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

void reverse(char str[])
{
    int start = 0;
    int end = length(str) - 1;

    while (start < end)
    {
        if (!isAlphabet(str[start]))
            start++;
        else if (!isAlphabet(str[end]))
            end--;
        else
        {
            swap(&str[start], &str[end]);
            start++;
            end--;
        }
    }
}