#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
typedef struct node *NODE;
NODE insert_rear(NODE first, int item)
{
    NODE newnode;
    newnode = (NODE)malloc(sizeof(struct node));
    newnode->data = item;
    if (first == NULL)
    {
        first = newnode;
        first->link = newnode;
        return first;
    }
    else
    {
        NODE temp = first;
        while (temp->link != first)
            temp = temp->link;
        temp->link = newnode;
        newnode->link = first;
        return first;
    }
}
NODE delete_rear(NODE first)
{
    if (first == NULL)
    {
        printf("List is empty\n");
        return first;
    }
    else
    {
        int itm;
        NODE temp = first;
        if (first->link == first)
        {
            itm = first->data;
            free(temp);
            first = NULL;
        }
        else
        {
            NODE prev = NULL;
            while (temp->link != first)
            {
                prev = temp;
                temp = temp->link;
            }
            prev->link = first;
            itm = temp->data;
            free(temp);
        }
        printf("Deleted data is %d\n", itm);
        return first;
    }
}
void display(NODE first)
{
    if (first == NULL)
    {
        printf("List is empty");
        return;
    }
    else
    {
        NODE temp;
        temp = first;
        printf("Contents of the Circular Linked list are\n");
        while (temp->link != first)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("%d", temp->data);
    }
}
int main()
{
    int choice, val;
    NODE first = NULL;
    for (;;)
    {
        printf("Enter your choice\n1 Insert rear\n2 Delete rear\n3 Display\n4 Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data\n");
            scanf("%d", &val);
            first = insert_rear(first, val);
            break;
        case 2:
            first = delete_rear(first);
            break;
        case 3:
            display(first);
            printf("\n");
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}
