#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
Node *creatNode(int data)
{
    Node *n;
    n = new Node();
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void traversal(Node *Pre, Node *post)
{
    while (pre != NULL)
    {
        cout << "Element : " << pre->data << endl;
        pre = pre->right;
        cout << "Element : " << pre->data << endl;
        pre = pre->left;
    }
    while (post != NULL)
    {
        cout << "Element : " << post->data << endl;
        post = post->right;
        cout << "Element : " << post->data << endl;
        post = post->left;
    }
}
int main()
{
    /*   Node *p;
    p=new Node();
    p->left=NULL;
    p->right=NULL; 

    Node *p1;
    p1=new Node();
    p1->left=NULL;
    p1->right=NULL; 

    Node *p2;
    p2=new Node();
    p2->left=NULL;
    p2->right=NULL; 
 
    p->left=p1;
    p->right=p2;  */

    Node *p = creatNode(2);
    Node *p1 = creatNode(3);
    Node *p2 = creatNode(5);
    Node *p3 = creatNode(4);
    Node *p4 = creatNode(6);
    Node *p5 = creatNode(7);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = NULL;

    traversal(p, p1);

    return 0;
}