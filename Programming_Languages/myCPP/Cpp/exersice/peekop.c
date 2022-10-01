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
int peak(stack *ptr, int i)
{
    int arrayInd = ptr->top - i + 1;
    if (arrayInd < 0)
    {
        printf("invalid");
        return -1;
    }
    else
    {
        return ptr->arr[arrayInd];
    }
}
int stack_top(stack *ptr)
{
    return ptr->arr[ptr->top];
}
int stack_bottom(stack *ptr)
{
    return ptr->arr[0];
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
            printf("popped %d  %d\n stack:\n", pop(s), i);
        }
        printf("%d\n", isFull(s));
        printf("%d\n", isEmpty(s));
        break;
    case 3:
         push(s, 1);
         push(s, 2);
         push(s, 3);
         push(s, 4);
         push(s, 5);
         push(s, 6);
         push(s, 7);
         push(s, 8);
        for (int i = 1; i <= s->top + 1; i++)
        {
            printf("the value at index %d is %d\n", i, peak(s, i));
        }
        break;
    case 4:
        push(s, 1);
        push(s, 2);
        push(s, 3);
        push(s, 4);
        push(s, 5);
        push(s, 6);
        push(s, 7);
        push(s, 8);
        printf("the top most value of this stack is %d\n",stack_top(s));
        printf("the  bottom value of this stack is %d\n",stack_bottom(s));
        break;

    default:
        printf("invalid Choice");
        break;
        return 0;
    }
}