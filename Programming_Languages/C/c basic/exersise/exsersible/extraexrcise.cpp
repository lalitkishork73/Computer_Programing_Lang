#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;

};
class stack
{
    public:
        int top;
        int size;
        int *arr;
};

// linked list insertion_ _ _ _ _ _ _ _ _ _ _ _ _ _
void LL_travarsal(Node *head)
{
    while (head!=NULL)
    {
        cout<<"BOX : "<<head->data<<endl;
        head=head->next;
    }
}
Node *InFirst(Node *head,int data)
{
    Node *ptr=new Node();
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
}
Node *InEnd(Node *head,int data)
{
    Node *ptr=new Node();
    Node *p=head;
    ptr->data=data;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
Node *InIndex(Node *head,int data,int index)
{
    Node *ptr=new Node();
    Node *p=head;
    ptr->data=data;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
Node *InNode(Node *head,Node *prev,int data)
{
    Node *ptr=new Node();
    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;
    return head;
}

// Linkde list delation _ _ _ _ _ _ _ _ _ _ _

Node *DeFirst(Node *head)
{
    Node *p=head;
    head=head->next;
    free(p);
    return head;
    
}
Node *DeEnd(Node *head)
{
    Node *p=head;
    Node *q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
}
Node *DeIndex(Node *head,int index)
{
    Node *p=head;
    Node *q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
Node *DeAtValue(Node *head,int data)
{
    Node *p=head;
    Node *q=head->next;
    while(q->data!=data && p->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if (q->data==data)
    {
        p->next=q->next;
        free(q);
        return head;
    }
}
// Help of Stack opp use Linked list_ _ _ _ _ _ _ _ _ 
int IsEmptyLL(Node *top)
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
int IsFullLL(Node *top)
{   
    Node *p=new Node();
    if (top==p)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Node *pushLL(Node *top,int data)
{
    if (IsFullLL(top))
    {
        cout<<"the stack is overflowed"<<endl;
    }
    else
    {
        Node *p=new Node();
        p->data=data;
        p->next=top;
        top=p;
        return top;
    }
}
int popLL(Node **top)
{
    if (IsEmptyLL(*top))
    {
        cout<<"the stack is Empty"<<endl;
    }
    else
    {
        Node *p=*top;
        *top=(*top)->next;
        int x=p->data;
        free(p);
        return x;
    }
    
}
// stack opp_ _ _ _ _ _ _ _ _ _ _ _ _
int IsEmpty(stack *top)
{
    if (top->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(stack *top)
{
    if (top->top==top->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(stack *top,int data)
{
    if (IsFull(top))
    {
        cout<<"stack is overflowed"<<endl;
    }
    else
    {
        top->top++;
        top->arr[top->top] = data;
    }
    
}

int pop(stack *top)
{
    if (IsEmpty(top))
    {
        cout<<"this stack is Empty"<<endl;
    }
    else
    {
        int x=top->arr[top->top];
        top->top--;
        return x;
    }
}

int stock_top(stack *top)
{
    return top->arr[top->top];
}
int stock_down(stack *top)
{
    return top->arr[0];
}

int main(int input)
{
    cout<<"enter the input run oopration"<<endl
        <<"1.LL Insertion"<<endl
        <<"2.LL Delation"<<endl
        <<"3.stack op using LL"<<endl
        <<"4.stack arr"<<endl;

        Node *one=new Node();
        Node *two=new Node();
        Node *three=new Node();
        Node *four=new Node();

        one->data=2; 
        two->data=5;
        three->data=6;
        four->data=7;

        one->next=two;
        two->next=three;
        three->next=four;
        four->next=NULL;

    cin>>input;
    switch (input)
    {
    case 1: 
        InFirst()
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    
    default:
        break;
    }

}


