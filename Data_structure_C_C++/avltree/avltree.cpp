#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;
    int height;
};
int max(int a, int b)
{
    return a > b ? a : b;
}
int getHeight(Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}
Node *createNode(int key)
{
    Node *node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}
int getbalancedFactor(Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}
Node *rightRotate(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->left;

    x->right = y;
    y->left = T2;
    y->height = +max(getHeight(y->right), getHeight(y->left)) + 1;
     x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    return x;
}
Node *leftRotate(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->right;

    y->left = x;
    x->right = T2;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return y;
}
Node *insert(Node *node, int key)
{
    if (node == NULL)
    {
        return createNode(key);
    }
    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
        return node;
    }
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getbalancedFactor(node);

    // left left rotate
    if (bf > 1 && key > node->left->key)
    {
        return rightRotate(node);
    }
    // right right rotate
    if (bf < -1 && key > node->right->key)
    {
        return leftRotate(node);
    }
    // left right rotate
    if (bf > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // right left rotate
    if (bf < -1 && key > node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
void preOrder(Node *root)
{
    if (root != NULL)
    {
        cout << " " << root->key;
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    Node *root = NULL;
    root = insert(root, 45);
    root = insert(root, 55);
    root = insert(root, 14);
    root = insert(root, 75);
    root = insert(root, 20);
    preOrder(root);
    return 0;
}