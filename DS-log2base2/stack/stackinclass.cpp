#include <iostream>
using namespace std;
#define max 5

class stackinclass
{
private:
    int item[max];
    int top;

public:
    stackinclass();
    int push(int);
    int pop();
    int isFull();
    int isEmpty();
    void display();
};

stackinclass::stackinclass()
{
    top = -1;
}
int stackinclass::isFull()
{
    if (top == (max - 1))
        return 1;
    return 0;
}
int stackinclass::isEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}
int stackinclass::push(int n)
{
    if (isFull())
        return 0;
    ++top;
    item[top] = n;
    return n;
}
int stackinclass::pop()
{
    if (isEmpty())
        return 0;
    int n = item[top];
    --top;
    return n;
}
void stackinclass::display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << item[i] << endl;
    }
}

int main()
{
    // your code goes here
    stackinclass stk;
    int choice, n, temp;
    while (choice != 0)
    {
        cout << "\n0. Exit \n"
             << "1. Insert \n"
             << "2. Delete \n"
             << "3. Display \n"
             << endl;
        cout << "enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            break;
        case 1:
            cout << "insert" << endl;
            cin >> n;
            temp = stk.push(n);
            temp == 0 ? cout << "Stack is Full" << endl : cout << temp << " INSERTED" << endl;
            break;
        case 2:
            cout << "delete" << endl;
            temp = stk.pop();
            temp == 0 ? cout << "Stack is Empty" << endl : cout << temp << " deleted" << endl;
            break;
        case 3:
            cout << "display" << endl;
            stk.display();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
    return 0;
}