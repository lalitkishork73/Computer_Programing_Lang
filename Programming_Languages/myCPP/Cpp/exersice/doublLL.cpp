#include <iostream>
using namespace std;

class Node
{
public:
    Node *prevs;
    int data;
    Node *next;
};
void travarsal_Next(Node *head)
{
    while (head != NULL)
    {
        cout << "Num:" << head->data << endl;
        head = head->next;
    }
}
void travarsal_prevs(Node *head)
{
    while (head != NULL)
    {
        cout << "Num:" << head->data << endl;
        head = head->prevs;
    }
}
int main()
{
    Node *one = new one();
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

    one->prevs = NULL;
    two->prevs = one;
    three->prevs = two;
    four->prevs = three;

    cout << "Next Node" << endl;
    travarsal_Next(one);
    cout << "prevoius Node" << endl;
    travarsal_prevs(four);

    return 0;
}
