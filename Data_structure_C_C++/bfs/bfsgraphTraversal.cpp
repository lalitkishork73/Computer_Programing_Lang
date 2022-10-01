#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Stack
{
public:
    int top;
    int size;
    char *arr;
};

int isempty(Stack *sp)
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
int isfull(Stack *sp)
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
void push(Stack *sp, char val)
{
    if (isfull(sp))
    {
        cout << "full" << endl;
    }
    else
    {
        sp->arr[++sp->top] = val;
    }
}
char pop(Stack *sp)
{
    if (isempty(sp))
    {
        cout << "empty" << endl;
        return -1;
    }
    else
    {
        char val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
int matching(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }
    return 0;
}
char paranthesis(char *exp)
{
    Stack *sp = new Stack();
    sp->top = -1;
    sp->size = 100;
    sp->arr = new char[sp->size];
    char poped;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isempty(sp))
            {
                return 0;
            }
            poped = pop(sp);
            if (!matching(poped, exp[i]))
            {
                return 0;
            }
        }
    }

    if (isempty(sp))
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
    char *sp = {"(sjhjd)[]["};
    if(paranthesis(sp))
    {
        cout<<"matching "<<endl;
    }
    else
    {
        cout<<"not matching "<<endl;
    }

    return 0;
}