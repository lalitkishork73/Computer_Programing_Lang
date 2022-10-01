#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
};
int Isempty(stack *p)
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
int Isfull(stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(stack *p, int val)
{
    if (Isfull(p))
    {
        cout << "stack is overflow" << endl;
    }
    else
    {
        p->top++;
        p->arr[p->top] = val;
    }
}
int pop(stack *p)
{
    if (Isempty(p))
    {
        cout<<"the stack is already empty" << endl;
        return -1;
    }
    else
    {
        int val=p->arr[p->top];
        p->top=p->top-1;
        return val;
    }
}
int stack_Bottom(stack *p)
{
    return p->arr[0];
}
int stack_top(stack *p)
{
    return p->arr[p->top];
}
int main()
{
    stack *p = new stack();
    p->size = 6;
    p->top = -1;
    p->arr = new int[p->size];
    cout << "stack has been created succesfully" << endl;
    cout << "element:" << Isfull(p) << endl;
    cout << "element:" << Isempty(p) << endl;
    cout<<"push Opration"<<endl;
    cout << "element:" << Isfull(p) << endl;
    cout << "element:" << Isempty(p) << endl;
    cout<<"pop Opration"<<endl;
    
    push(p, 22);
    push(p, 66);
    push(p, 29);
    push(p, 23);
    cout << "element:" << Isfull(p) << endl;
    cout << "element:" << Isempty(p) << endl;
    cout <<"this is "<<stack_top(p)<<endl;
    cout<<"this is "<<stack_Bottom(p)<<endl;


    return 0;
}