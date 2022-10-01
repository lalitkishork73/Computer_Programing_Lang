#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;
void travarsal(Node *head)
{
    while (head != NULL)
    {
        printf("Wul:%d\n", head->data);
        head = head->next;
    }
}
int main()
{
    Node *one = (Node *)malloc(sizeof(Node));
    Node *two = (Node *)malloc(sizeof(Node));
    Node *three = (Node *)malloc(sizeof(Node));
    Node *four = (Node *)malloc(sizeof(Node));
    Node *five = (Node *)malloc(sizeof(Node));
    Node *six = (Node *)malloc(sizeof(Node));

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    five->data = 5;
    six->data = 6;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;

    travarsal(one);
    return 0;
}