#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *top=NULL;

Node *isEmpty(Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(Node *top)
{
    Node *p = (Node *)malloc(sizeof(Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Node *push(Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack is overflow ");
    }
    else
    {
        Node *n = (Node *)malloc(sizeof(Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
void traversal(Node *head)
{
    while (head != NULL)
    {
        printf("Wol:%d\n", head->data);
        head = head->next;
    }
}
int pop(Node *top)
{
    if (isEmpty(top))
    {
        printf("stack is Emptry");
        return -1;
    }
    else
    {
        Node *n = top;
        int x;
        top=top->next;
        x=n->data;
        free(n);
    
        return x;
    }
    
}
int main()
{   
    printf("PUSH Opration\n");
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    traversal(top);

    printf("POOP Opration\n");
    int itop=pop(top);
    printf("THis Number Is Poped Out  %d :%d :%d :\n",pop(top),itop,&itop);

    return 0;
}