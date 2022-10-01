#include <iostream>
#include <string>
using namespace std;

class stack
{
public:
    int size;
    int top;
    char *arr;
};

int IsEmpty(stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(stack *sp, char data)
{
    if (IsFull(sp))
    {
        cout << "stack is Full" << endl;
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = data;
    }
}
char pop(stack *sp)
{
    if (IsEmpty(sp))
    {
        cout << "stack is Empty" << endl;
    }
    else
    {
        char data = sp->arr[sp->top];
        sp->top--;
        return data;
    }
}
void traversal(stack *sp)
{
    for (int i = 0; i <= sp->size - 1; i++)
    {
        cout << "data: " << sp->arr[i] << endl;
    }
}
char stack_top(stack *p)
{
    return p->arr[p->top];
}
char stack_down(stack *p)
{
    return p->arr[0];
}
int match(char a, char b)
{
    if (a == '[' && b == ']' || a == '{' && b == '}' || a == '(' && b == ')')
    { 
        return 1;
    }
    /* if (a=='{' && b=='}')
    {
        return 1;
    }
    if (a=='(' && b==')')
    {
        return 1;
    } */
}
int parenthesisMatch(char *fun)
{
    stack *sp;
    sp->top = -1;
    sp->size = 100;
    sp->arr = new char[sp->size];
    char pop_ch;

    for (int i = 0; fun[i] != '\0'; i++)
    {
        if (fun[i] == '[' || fun[i] == '{' || fun[i] == '(')
        {
            push(sp, fun[i]);
        }
        else if (fun[i] == ']' || fun[i] == '}' || fun[i] == ')')
        {
            if (IsEmpty(sp))
            {
                return 0;
            }
            pop_ch = pop(sp);
            if (!match(pop_ch, fun[i]))
            {
                return 0;
            }
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
    char *data = "[25+{201*(25)}}]";
    if (parenthesisMatch(data))
    {
        cout << "parenthisisis matched" << endl;
    }
    else
    {
        cout << "parenthesiis is not matched " << endl;
    }

    return 0;
}