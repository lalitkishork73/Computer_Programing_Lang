#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *cir_insert_first(Node *head,int data)
{
    Node *ptr=(Node*)malloc(sizeof(Node));
    Node *p=head->next;
    ptr->data=data;
        while (p->next!=head)
        {
            p=p->next;
        }
        p->next=ptr;
        ptr->next =head;
        head=ptr;
        return head;
}
Node *cir_insert_End(Node *head,int data)
{
    Node *ptr=(Node*)malloc(sizeof(Node));
    Node *p=head->next;
    ptr->data=data;
        while (p->next!=head)
        {
            p=p->next;
        }
        p->next=ptr;
        ptr->next =head;
        return head;
}
void travarsal(Node *head)
{
    Node *p=head;
    do
    {
        cout<<"Num:"<<p->data<<endl;
        p=p->next;
    }while (p!=head);
    
}

int main()
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
    four->next = one;

    cout<<"Before"<<endl;
    travarsal(one);
    cout<<"first"<<endl;
    one=cir_insert_first(one,55);
    travarsal(one);
    cout<<"End"<<endl;
    one=cir_insert_End(one,88);
    travarsal(one);

    return 0;
}