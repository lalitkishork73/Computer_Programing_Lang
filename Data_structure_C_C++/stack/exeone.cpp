#include<iostream>
using namespace std;

class stack
{
    public:
        int top;
        int size;
        int *arr;
};
int IsEmpty(stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int IsFull(stack *p)
{
    if (p->top==p->size-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}
void push(stack *p,int data)
{
    if (IsFull(p))
    {
        cout<<"bhai ye stack Full ho gaya hai bhar nahi sakta tu te value :"<<data<<endl;
    }
    else
    {
        p->top++;
        p->arr[p->top] = data;
    }
    
}
int pop(stack *p)
{
    if (IsEmpty(p))
    {
        cout<<"bhai dimag mat kharab kar ye khali hai he pahle se hi "<<endl;
    }
    else
    {
        int data=p->arr[p->top];
        p->top--;
        return data;
    }
    
}
int stack_top(stack *p)
{
    return p->arr[p->top];
    
}
int stack_down(stack *p)
{
    return p->arr[0];
}

void traverse(stack *p)
{
    for (int i = 0; i <=p->size-1; i++)
    {
        cout<<"data : "<<p->arr[i]<<endl;
    }
    
}

int main()
{
    stack *top=new stack();
    top->size=10;
    top->top=-1;
    top->arr=new int[top->size];
    push(top,1);
    push(top,2);
    push(top,3);
    push(top,4);
    push(top,5);
    push(top,6);
    traverse(top);
    cout<<"data: "<<pop(top)<<endl;
    cout<<"data: "<<pop(top)<<endl;
    cout<<"data: "<<pop(top)<<endl;
    cout<<"stack up : "<<stack_top(top)<<endl;
    cout<<"stack down : "<<stack_down(top)<<endl;


    return 0;
}