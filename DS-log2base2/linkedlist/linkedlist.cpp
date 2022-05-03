#include <iostream>
using namespace std;
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE getnode()
{
    NODE X;
    X = (NODE)malloc(sizeof(struct node));
    return (X);
}
void freenode(NODE X)
{
    free(X);
}
NODE insert_front(NODE first, int item)
{
    NODE temp;
    temp = getnode();
    temp->info = item;
    temp->link = first;
    return (temp);
}
NODE insert_randompos(NODE first, int pos, int val) // first pos =0
{
    if (first == NULL)
    {
        printf("List is empty\n");
        return first;
    }
    NODE temp, var;
    pos--;
    var = first;
    while (pos--)
    {
        var = var->link;
    }
    if (var == NULL)
    {
        cout << "position invalid" << endl;
    }
    else
    {
        temp = getnode();
        temp->info = val;
        cout << "inserted" << endl;
        temp->link = var->link;
        var->link = temp;
    }
    return first;
}
NODE insert_basedonval(NODE first, int checkval, int val) //after value
{
    if (first == NULL)
    {
        printf("List is empty\n");
        return first;
    }
    NODE temp, var;
    var = first;

    while (var != NULL)
    {
        if (var->info == checkval)
            break;
        var = var->link;
    }
    if (var == NULL)
    {
        cout << "no match found for checkval" << endl;
    }
    else
    {
        temp = getnode();
        temp->info = val;
        cout << "inserted" << endl;
        temp->link = var->link;
        var->link = temp;
    }
    return first;
}
NODE insert_last(NODE first, int item)
{
    NODE temp, var;
    temp = getnode();
    temp->info = item;
    temp->link = NULL;
    if (first == NULL)
        return (temp);
    var = first;
    while (var->link != NULL)
    {
        var = var->link;
    }

    cout << "item inserted " << endl;

    var->link = temp;
    return first;
}
NODE delete_front(NODE first)
{
    NODE temp;
    if (first == NULL)
    {
        printf("List is empty\n");
        return first;
    }
    temp = first;
    temp = temp->link;
    printf("Deleted data is %d\n", first->info);
    freenode(first);
    return (temp);
}
NODE delete_rear(NODE first)
{
    NODE var, seclast;
    if (first == NULL)
    {
        printf("List is empty\n");
        return first;
    }
    var = first;
    while (var->link != NULL)
    {
        seclast = var;
        var = var->link;
    }

    seclast->link = NULL;
    printf("Deleted data is %d\n", var->info);
    freenode(var);
    return (first);
}
void display(NODE first)
{
    NODE temp;
    if (first == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Contents of the Linked list are\n");
    temp = first;
    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}
void print_in_reverse(struct node *head)
{
    if (head == NULL)
        return;

    print_in_reverse(head->link);
    printf("%d ", head->info);
}
int main()
{
    int choice, item;
    NODE first = NULL;
    for (;;)
    {
        printf("Enter your choice\n1 Insert front\n2 Delete front\n3 Display\n4 insert based on pos\n5 insert on val match\n6 insert last\n7 delete last\n8 Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item\n");
            scanf("%d", &item);
            first = insert_front(first, item);
            break;
        case 2:
            first = delete_front(first);
            break;
        case 3:
            display(first);
            break;
        case 4:
            int pos;
            printf("Enter the pos\n");
            scanf("%d", &pos);
            printf("Enter the item\n");
            scanf("%d", &item);
            first = insert_randompos(first, pos, item);
            break;
        case 5:
            int item1;
            printf("Enter the check val\n");
            scanf("%d", &item1);

            printf("Enter the item\n");
            scanf("%d", &item);
            first = insert_basedonval(first, item1, item);
            break;
        case 6:
            printf("Enter the item\n");
            scanf("%d", &item);
            first = insert_last(first, item);
            break;
        case 7:
            first = delete_rear(first);
            break;
        case 8:
            exit(0);
        }
    }
}