#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void LLtravarsal(Node *top)
{
    while (top != NULL)
    {
        cout << "DATA: " << top->data << endl;
        top = top->next;
    }
}
int IsEmpty(Node *top)
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
int IsFull(Node *top)
{
    Node *p = new Node();
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
    if (IsFull(top))
    {
        cout << "Stack is Overflow" << endl;
    }
    else
    {
        Node *p = new Node();
        p->data = x;
        p->next = top;
        top = p;
        return top;
    }
}
int pop(Node **top)
{
    if (IsEmpty(*top))
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        Node *p = *top;
        *top = (*top)->next;
        int x = p->data;
        free(p);
        return x;
    }
}

int main()
{
    Node *top = NULL;
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 15);
    LLtravarsal(top);
    cout << "after pop Opration" << endl;
    int elements = pop(&top);
    cout<<"DATA poped : "<<elements<<endl;
    LLtravarsal(top);

    return 0;
}