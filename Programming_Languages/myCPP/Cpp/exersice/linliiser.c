#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

void linkedlistTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elemetn:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    ptr->data = data;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node *insertAtNode(struct Node *prenode, struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next=prenode->next;
    prenode->next=ptr;  
    
    return head;
}

int main()
{
    Node *one;
    Node *two;
    Node *three;
    Node *four;

    one = (Node *)malloc(sizeof(Node));
    two = (Node *)malloc(sizeof(Node));
    three = (Node *)malloc(sizeof(Node));
    four = (Node *)malloc(sizeof(Node));

    one->data = 250;
    one->next = two;
    two->data = 205;
    two->next = three;
    three->data = 215;
    three->next = four;
    four->data = 255;
    four->next = NULL;

    printf("Before\n");
    linkedlistTraversal(one);
    // one=insertAtFirst(one,99);
    // two = insertAtIndex(two, 56, 1);
    // two = insertAtEnd(two, 56);
    two=insertAtNode(two,one,99);
    printf("After\n");
    linkedlistTraversal(two);
    // printf("one:%d\ntwo:%d\nthree:%d\nfour:%d\n", one->data, two->data, three->data, four->data);
    return 0;
}