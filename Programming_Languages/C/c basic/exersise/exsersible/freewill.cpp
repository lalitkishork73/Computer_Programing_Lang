#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};
void traversal(Node *head)
{
    while (head!=NULL)
    {
        cout<<"element :"<<head->data<<endl;
        head=head->next;
    }
}
Node *InFirst(Node *head)
{
    Node *p=head;
    head=head->next;
    free(p);
    return head;
}
Node *InEnd(Node *head)
{
    Node *p=head;
    Node *q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
    
}
Node *InIndex(Node *head,int index)
{
    Node *p=head;
    Node *q=head->next;
    for (int i=0;i<=index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
Node *InAtValue(Node *head,int data)
{
    Node *p=head;
    Node *q=head->next;
    if (q->data==data && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if (q->data==data)
    {
        p->next=q->next;
        free(q);
    }
    return head;  
    
}
int main()
{
 Node *one = new Node();
    Node *two = new Node();
    Node *three = new Node();
    Node *four = new Node();

    one->data = 25;
    two->data = 24;
    three->data = 48;
    four->data = 52;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    traversal(one);

    cout << "- - - - - -Delation at beganing - - - - - -" << endl;
    one = InFirst(one);
    traversal(one);

    cout << "- - - - - -Delation After Node - - - - - -" << endl;
    one = InAtValue(one,52);
    traversal(one);

    cout << "- - - - - -Delation at index - - - - - -" << endl;
    one = InIndex(one, 1);
    traversal(one);

    cout << "- - - - - -Delation at end - - - - - -" << endl;
    one = InEnd(one);
    traversal(one);


    return 0;
}