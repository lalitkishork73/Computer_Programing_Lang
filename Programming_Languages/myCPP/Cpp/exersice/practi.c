#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *inver_At_First(Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

Node *insert_At_Index(Node *head,int data,int index){
    Node *ptr=(Node*)malloc(sizeof(Node));
    Node *p=head;
    ptr->data=data;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}
Node *insert_At_End(Node *head,int data){
    Node *ptr=(Node*)malloc(sizeof(Node));
    Node *p=head;
    ptr->data=data;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
    
    
}

void traversal(Node *head)
{
    while (head != NULL)
    {
        printf("Wol:%d\n", head->data);
        head = head->next;
    }
}

int main()
{

    Node *one = (Node *)malloc(sizeof(Node));
    Node *two = (Node *)malloc(sizeof(Node));
    Node *three = (Node *)malloc(sizeof(Node));
    Node *four = (Node *)malloc(sizeof(Node));

    one->data = 250;
    one->next = two;
    two->data = 205;
    two->next = three;
    three->data = 215;
    three->next = four;
    four->data = 255;
    four->next = NULL;

    printf("Before\n");
    traversal(one);
    one = inver_At_First(one, 2);
    printf("after at first\n");
    traversal(one);
    one=insert_At_Index(one,33,3);
    printf("after index\n");
    traversal(one);
    one=insert_At_End(two,88);
    printf("after index\n");
    traversal(one);

    return 0;
}