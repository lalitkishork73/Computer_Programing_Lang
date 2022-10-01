#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *top = NULL;
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
Node *push(Node *top, int data)
{
    if (IsFull(top))
    {
        cout << "stack is overflowed" << endl;
    }
    else
    {
        Node *p = new Node();
        p->data = data;
        p->next = top;
        top=p;
        return top;
    }
}
int pop(Node *top)
{
    if (IsEmpty(top))
    {
        cout << "this is empty" << endl;
    }
    else
    {
        Node *p = top;
        int data = p->data;
        p = p->next;
        free(p);
        return data;
    }
}

void travarsal(Node *top)
{
    while (top != NULL)
    {
        cout << "Element :" << top->data << endl;
        top = top->next;
    }
}

int main()
{
    top = push(top, 25);
    top = push(top, 52);
    top = push(top, 33);
    top = push(top, 85);
    top = push(top, 13);
    travarsal(top);
    cout<<"poped Opration"<<endl;
    cout<<"poped data:"<<pop(top)<<endl;
    return 0;
}