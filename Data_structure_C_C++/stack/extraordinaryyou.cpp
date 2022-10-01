#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

void travarsal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"Ultimatrix :"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
Node * In_first(Node *head,int data)
{
    Node *ptr=new Node();
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
}
Node *In_End(Node *head,int data)
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
Node *In_index(Node *head,int data,int index)
{
    Node *ptr=new Node();
    Node *p=head;
    ptr->data=data;
    for (int i = 0; i <= index-1; i++)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
Node *In_Node(Node *head,Node *prev,int data)
{   
    Node *ptr=new Node();
    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;
    return head;

}
int main()
{
    Node *one = new Node();
    Node *two = new Node();
    Node *three = new Node();
    Node *four = new Node();

    one->data =1;
    two->data =10;
    three->data =21;
    four->data =6;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    travarsal(one);

    cout<<"insert at Node"<<endl;
    one=In_Node(three,one,36);
    travarsal(one);

    cout<<"insert at first"<<endl;
    one=In_first(one,25);
    travarsal(one);

    cout<<"insert at end"<<endl;
    one=In_End(one,33);
    travarsal(one);

    cout<<"insert at index"<<endl;
    one=In_index(one,50,3);
    travarsal(one);
}