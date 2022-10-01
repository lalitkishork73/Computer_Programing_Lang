#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
} stack;
int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack empty\n");
        return -1;
    }
    else
    {
        int i = ptr->arr[ptr->top];
        ptr->top--;
        return i;
    }
}
int main()
{
    stack *s = (stack *)malloc(sizeof(stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("%d\n", isFull(s));
    printf("%d\n", isEmpty(s));
    printf("after puting val in stack\n");
    int inputs;
    int n;
    scanf("%d", &inputs);
    switch (inputs)
    {
    case 1:
        printf("enter the stack:_ _\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            push(s, i);
        }
        printf("%d\n", isFull(s));
        printf("%d\n", isEmpty(s));
        break;
    case 2:
        printf("enter the stack:_ _\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("popped %d  %d stack:\n", pop(s), i);
        }
        printf("%d\n", isFull(s));
        printf("%d\n", isEmpty(s));
        break;
    default:
        printf("invalid Choice");
        break;
        return 0;
    }
}