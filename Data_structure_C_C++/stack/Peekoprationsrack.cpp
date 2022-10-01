
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
int peekoprationsrack(stack *sp,int i)
{
    if (sp->top-i+1<0)
    {
        cout<<"invalid Possition"<<endl;
    }
    else
    {
        return sp->arr[sp->top-i+1];
    }
    
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
    push(p, 33);
    push(p, 29);
    push(p, 55);
    cout << "element:" << Isfull(p) << endl;
    cout << "element:" << Isempty(p) << endl;
    cout<<"pop Opration"<<endl;
    pop(p);
    pop(p);
    push(p, 25);
    push(p, 45);
    push(p, 43);
    push(p, 77);
    cout << "element:" << Isfull(p) << endl;
    cout << "element:" << Isempty(p) << endl;
    cout << "POOPD "<<pop(p)<< endl;

    for (int j = 1; j <= p->top+1; j++)
    {
        cout<<"the value at index "<<j<<" is "<<peekoprationsrack(p,j)<<endl;
    }
    
        cout<<"the value at index is "<<peekoprationsrack(p,1)<<endl;

    
    return 0;
}