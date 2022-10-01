#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
Node *insert_at_begin(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

Node *insert_at_Between(Node *head, int data, int index)
{
    Node *ptr = new Node();
    Node *p = head;
    ptr->data = data;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
Node *insert_at_End(Node *head, int data)
{
    Node *ptr = new Node();
    Node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
Node *insert_after_Node(Node *head,Node *prev,int data)
{
    Node *ptr = new Node();
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

    one->data = 25;
    two->data = 24;
    three->data = 48;
    four->data = 52;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    cout << "- - - - - -Insertion at beganing - - - - - -" << endl;
    one = insert_at_begin(one, 40);
    traversal(one);

    cout << "- - - - - -Insertion at index - - - - - -" << endl;
    one = insert_at_Between(one, 33, 2);
    traversal(one);

    cout << "- - - - - -Insertion at end - - - - - -" << endl;
    one = insert_at_End(one, 10);
    traversal(one);

    cout << "- - - - - -Insertion After Node - - - - - -" << endl;
    one = insert_after_Node(one,three, 90);
    traversal(one);
    return 0; 
    }
