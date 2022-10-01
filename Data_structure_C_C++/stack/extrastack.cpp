#include<iostream>  
using namespace std;

class stack
{
    public:
    int top;
    int size;
    int *arr;
};

int IsEmpty(stack *top)
{
    if (top->arr[top->top]==-1)
    {
        return 1;
    }
    else 
    {return 0;}
    
}
int IsFull(stack *top)
{
    if (top->arr[top->top]==top->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void push(stack *top, int data)
{
    if (IsFull(top))
    {
        cout<<"this stack is overflowed ! we can not accept this value : "<<data<<endl;
    }
    else
    {
        top->top++;
        top->arr[top->top] = data;
    }
    
}
int pop(stack *top)
{
    if (IsEmpty(top))
    {
        cout<<"sorry but we are not able to pop somthing because it is empty! "<<endl;
    }
    else
    {
        int data = top->arr[top->top];
        top->top--;
        return data;
    }
}
int stack_up(stack *top)
{
    return top->arr[top->top];
}
int stack_down(stack *top)
{
    return top->arr[0];
}
void travarsall(stack *top)
{
    for (int i = 0; i <= top->size-1; i++)
    {
        cout<<"element :"<<top->arr[i]<<endl;
    }
    
}
int main()
{
    stack *top=new stack();
    top->top=-1;
    top->size=10;
    top->arr=new int(top->size);
    cout<<"push opration"<<endl;
    push(top,1);
    push(top,12);
    push(top,44);
    push(top,18);
    push(top,99);
    travarsall(top);
    cout<<"poped:"<<pop(top)<<endl;
    cout<<"top element :"<<stack_up(top)<<endl;
    cout<<"top element :"<<stack_down(top)<<endl;
    return 0;
}