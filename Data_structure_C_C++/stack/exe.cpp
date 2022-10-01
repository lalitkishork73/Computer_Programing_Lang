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
    while (ptr!=NULL)
    {
        cout<<"data :"<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
}
Node * insertion_at_first(Node *head,int data)
{
    Node *p=new Node();
    p->data=data;
    p->next=head;
    head=p;
    return head;

}
Node *insertion_at_end(Node *head,int data)
{
    Node *p = new Node();
    Node *ptr=head;
    p->data=data;
    p->next=head->next;   
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=p;
    p->next=NULL;
    return head;
    
}
Node *insertion_at_index(Node *head,int data,int index)
{
    Node *ptr=new Node();
    ptr->data=data;
    Node *p=head;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}
Node *insertion_at_Node(Node *pre,Node *head,int data)
{
    Node *ptr=new Node();
    ptr->data=data;
    ptr->next=pre->next;
    pre->next=ptr;
    return head;
}
int main()
{
    Node *one = new Node;
    Node *two = new Node;
    Node *three = new Node;
    Node *four = new Node;

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
    one=insertion_at_Node(two,one,36);
    travarsal(one);

    cout<<"insert at first"<<endl;
    one=insertion_at_first(one,25);
    travarsal(one);

    cout<<"insert at end"<<endl;
    one=insertion_at_end(one,33);
    travarsal(one);

    cout<<"insert at index"<<endl;
    one=insertion_at_index(one,50,3);
    travarsal(one);

}
