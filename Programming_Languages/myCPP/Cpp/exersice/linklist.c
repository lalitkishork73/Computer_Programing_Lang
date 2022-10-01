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
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *forth;
    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    forth = (NOde *)malloc(sizeof(Node));

    head->data = 7;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 25;
    third->next = forth;
    forth->data = 51;
    forth->next = NULL;

    linkedlistTraversal(head);
    printf("head=%d\nsecond=%d\nthird=%d\n", head->data, second->data, third->data, forth->data);
    return 0;
}