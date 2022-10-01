#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *top = NULL;

int IsEmpty(Node *top)
{
    if (top==NULL)
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
    if (p == 0)
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
        cout << "stack is full " << endl;
    }
    else
    {
        Node *ptr = new Node();
        ptr->data = data;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
int pop(Node **top)
{
    if (IsEmpty(*top))
    {
        cout << "stack is NULL here is nothing to remove" << endl;
    }
    else
    {
        Node *p = *top;
        int data = p->data;
        *top = (*top)->next;
        free(p);
        return data;
    }
}
void travarsal(Node *top)
{
    while(top!=NULL)
    {
        cout<<"elemetn :"<<top->data<<endl;
        top=top->next;
    }
    
} 
int main()
{
    top=push(top,25);
    top=push(top,15);
    top=push(top,35);
    top=push(top,75);
    top=push(top,95);
    cout<<"push"<<endl;
    travarsal(top);
    int element = pop(&top);
    cout<<"poped "<<element<<endl;
    return 0;
}