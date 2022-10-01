#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};
    Node *f=NULL;
    Node *r=NULL;

int isEmpty(Node *f)
{
    if (f==NULL)
    {
        return 1;
    }
    return 0;
    
}
int isFull(Node *r)
{
        if (r==NULL)
        {
            return 1;
        }
        return 0;
}
int enqueue(int val)
{
    Node *n=new Node();
    if (isFull(n))
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        n->data=val;
        n->next=NULL;
        if (f==NULL)
        {
            f=r=n;
        }
        else
        {  
            r->next=n;
            r=n;
        }
        
    }
    
}
int dequeue()
{
    int val=-1;
    Node *p=f;
    if (isEmpty(f))
    {
        cout<<"queue is Empty"<<endl;
    }
    else
    {
        f=f->next;
        val=p->data;
        free(p);
    }
    return val;
}
void traverse(Node *head)
{
    cout<<"printing the element of this LL"<<endl;
    while (head!=NULL)
    {
        cout<<"ELemetn : " <<head->data<<endl;
        head=head->next;
    }
    
}
int main()
{
    traverse(f);
    enqueue(1);
    enqueue(2);
    enqueue(4);
    enqueue(3);
    traverse(f);
    cout<<"Dequeing : "<<dequeue()<<endl;
    cout<<"Dequeing : "<<dequeue()<<endl;
    traverse(f);


    return 0;
} 