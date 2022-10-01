#include <iostream>
#include <string>
using namespace std;

class stack
{
public:
    int top;
    int size;
    char *arr;
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
    if (p->top == p->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(stack *p, char data)
{
    if (IsFull(p))
    {
        cout << "bhai ye stack Full ho gaya hai bhar nahi sakta tu te value :" << data << endl;
    }
    else
    {
        p->top++;
        p->arr[p->top] = data;
    }
}
char pop(stack *p)
{
    if (IsEmpty(p))
    {
        cout << "bhai dimag mat kharab kar ye khali hai he pahle se hi " << endl;
        // return -1;
    }
    else
    {
        char data = p->arr[p->top];
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
    for (int i = 0; i <= p->size - 1; i++)
    {
        cout << "data : " << p->arr[i] << endl;
    }
}
char parenthesisisMatch(char *exp)
{
    stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = new char[sp->size];

    for (int i = 0;exp[i]!='\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (IsEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (IsEmpty(sp))
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
    char* exp = "(8)*(9)";
    if (parenthesisisMatch(exp))
    {
        cout << "the parenthesis is matching" << endl;
    }
    else
    {
        cout << "the parenthisis is not matching" << endl;
    }

    return 0;
}