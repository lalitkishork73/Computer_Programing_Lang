#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

Node *deletion_At_First(Node *head)
{
    Node *p=head;
    head=head->next;
    free(p);
    return head;
}
Node *deletion_At_index(Node *head,int index)
{
    Node *p=head;
    Node *q=head->next;
    for (int i = 1; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
Node *deletion_At_End(Node *head)
{
    Node *p=head;
    Node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
Node *deletion_At_NodenValue(Node *head,int value)
{
    Node *p=head;
    Node *q=head->next;
    while (q->data!=value && q->next!=NULL)
    {   
        p=p->next;
        q=q->next;
    }
    if (q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    
    free(q);
    return head;
}
void traversal(Node *head)
{
    while (head != NULL)
    {
        cout << "Num:" << head->data << endl;
        head = head->next;
    }
}

int main(int inputs)
{
    Node *one = (Node *)malloc(sizeof(Node));
    Node *two = (Node *)malloc(sizeof(Node));
    Node *three = (Node *)malloc(sizeof(Node));
    Node *four = (Node *)malloc(sizeof(Node));

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    cout << "<1> Deltion_At_First " << endl;
    cout << "<2> Deltion_At_End " << endl;
    cout << "<3> Deltion_At_index " << endl;
    cout << "<4> Deltion_At_Node " << endl;
    cout << "choose above Input_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
    cin >> inputs;

    switch (inputs)
    {
    case 1:
        one = deletion_At_First(one);
        traversal(one);
        break;
    case 2:
        one = deletion_At_index(one, 2);
        traversal(one);
        break;
    case 3:
        one = deletion_At_End(one);
        traversal(one);
        break;
    case 4:
        one = deletion_At_NodenValue(one, 2);
        traversal(one);
        break;
    default:
        cout << "invalid key o^o" << endl;
        break;
    }
    return 0;
}