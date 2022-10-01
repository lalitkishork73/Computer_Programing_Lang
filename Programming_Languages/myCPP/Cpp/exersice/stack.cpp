#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
};
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
int main()
{
    stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    if (isEmpty(s))
    {
        cout<<"the stack is empty"<<endl;
    }
    else
    {
        cout<<"the stack is full"<<endl;
    }
    
    return 0;
}