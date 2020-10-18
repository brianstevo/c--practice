#include <iostream>
using namespace std;
#define max 5

class Queue
{
private:
    int item[max];
    int front, rear;

public:
    Queue();
    int push(int);
    int pop();
    int isFull();
    int isEmpty();
    void display();
};

Queue::Queue()
{
    front = -1;
    rear = -1;
}
int Queue::isFull()
{
    if (front == 0 && rear == (max - 1))
        return 1;
    return 0;
}
int Queue::isEmpty()
{
    if (front == -1)
        return 1;
    return 0;
}
int Queue::push(int n)
{
    if (isFull())
        return 0;
    if (front == -1)
        front = 0;
    ++rear;
    item[rear] = n;
    return n;
}
int Queue::pop()
{
    if (isEmpty())
        return 0;
    int n = item[front];
    front >= rear ? (front = -1, rear = -1) : front++;
    return n;
}
void Queue::display()
{
    if (isEmpty())
        cout << "Queue is Empty" << endl;
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << item[i] << endl;
        }
    }
}

int main()
{
    // your code goes here
    Queue que;
    int choice = 1, n, temp;
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
            temp = que.push(n);
            temp == 0 ? cout << "Queue is Full" << endl : cout << temp << " INSERTED" << endl;
            break;
        case 2:
            cout << "delete" << endl;
            temp = que.pop();
            temp == 0 ? cout << "Queue is Empty" << endl : cout << temp << " deleted" << endl;
            break;
        case 3:
            cout << "display" << endl;
            que.display();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
    return 0;
}