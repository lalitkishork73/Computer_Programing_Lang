#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *inseartion_At_First(Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
Node *inseartion_At_End(Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
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
Node *inseartion_At_Index(Node *head, int data, int index)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node *p = head;
    ptr->data = data;
    int i = 1;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
Node *inseartion_At_Node(Node *head, Node *prenode, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = prenode->next;
    prenode->next = ptr;
    return head;
}
void traversal(Node *head)
{
    while (head != NULL)
    {
        cout << "Box:" << head->data << endl;
        head = head->next;
    }
}

int main(int input, int inputs, int index)
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

    cout << "<1> insertion_At_First " << endl;
    cout << "<2> insertion_At_End " << endl;
    cout << "<3> insertion_At_index " << endl;
    cout << "<4> insertion_At_Node " << endl;
    cout << "choose above Input_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
    cin >> inputs;

    switch (inputs)
    {
    case 1:
        cout << "ENter Input:" << endl;
        cin >> input;
        one = inseartion_At_First(one, input);
        traversal(one);
        break;
    case 2:
        cout << "ENter Input:" << endl;
        cin >> input;
        one = inseartion_At_End(one, input);
        traversal(one);
        break;
    case 3:
        cout << "ENter Input:" << endl;
        cin >> input;
        cout << "ENter Index:" << endl;
        cin >> index;
        one = inseartion_At_Index(one, input, index);
        traversal(one);
        break;
    case 4:

        cout << "ENter Input:" << endl;
        cin >> input;
        one = inseartion_At_Node(one, two, input);
        traversal(one);
        break;

    default:
        cout << "Number is INvalid" << endl;
        break;
    }
    return 0;
}