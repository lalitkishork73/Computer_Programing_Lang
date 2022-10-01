// LL using queue
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
// Global veriavbles
Node *f = new Node;
Node *r = new Node;
int isEmpty(Node *f)
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(Node *r)
{
    if (r == NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(int val)
{
    Node *n = new Node;
    if (isFull(n))
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue()
{
    int val = -1;
    Node *p = f;
    if (isEmpty(f))
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        f = f->next;
        val = p->data;
        free(p);
    }
    return val;
}
void traverse(Node *head)
{
    while (head != NULL)
    {
        cout << "enqued : " << head->data << endl;
        head = head->next;
    }
}

int main()
{
    cout << "queue opration" << endl;
    traverse(f);
    enqueue(25);
    enqueue(24);
    enqueue(74);
    enqueue(36);
    traverse(f);
    cout << "dequeue opration" << endl;
    cout << "Dequed : " << dequeue() << endl;
    traverse(f);
    return 0;
}