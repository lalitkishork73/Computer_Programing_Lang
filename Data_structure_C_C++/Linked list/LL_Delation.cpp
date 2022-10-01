#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *Delation_at_first(Node *head)
{
    Node *p = head;
    Node *q = head->next;

    head = head->next;
    free(p);
    return head;
}
Node *Delation_at_index(Node *head, int index)
{
    Node *p = head;
    Node *q=head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
Node *Delation_at_End(Node *head)
{
    Node *p = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
Node *Dealtion_by_value(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    else
    {
        cout<<"given Value is Not hare"<< endl;
    }
    return head;
}
traversal(Node *head)
{
    
    while (head != NULL)
    {
        cout<<"Element : "<<head->data<<endl;
        head=head->next;
    }
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

    cout << "- - - - - -Delation at beganing - - - - - -" << endl;
    one = Delation_at_first(one);
    traversal(one);

    cout << "- - - - - -Delation After Node - - - - - -" << endl;
    one = Dealtion_by_value(one,52);
    traversal(one);

    cout << "- - - - - -Delation at index - - - - - -" << endl;
    one = Delation_at_index(one, 1);
    traversal(one);

    cout << "- - - - - -Delation at end - - - - - -" << endl;
    one = Delation_at_End(one);
    traversal(one);


    return 0;
}