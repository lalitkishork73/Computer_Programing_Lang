#include<iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    char *arr;
};
int is_Empty(Stack *sp)
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
int is_full(Stack *sp)
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
    if (is_full(sp))
    {
        cout << "stack is full" << endl;
    }
    else
    {
        sp->arr[++sp->top] = val;
    }
}
char pop(Stack *sp)
{
    if (is_Empty(sp))
    {
        cout << "stack is Empty" << endl;
        return -1;
    }
    else
    {
        char val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
bool matching(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return true;
    }
    if (a == '{' && b == '}')
    {
        return true;
    }
    if (a == '[' && b == ']')
    {
        return true;
    }
    return false;
}
int paranthesis(char *exp)
{
    Stack *sp = new Stack();
    sp->top = -1;
    sp->size = 110;
    sp->arr = new char[sp->size];
    char poped;

    for (int i = 0; exp[i] <= '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (is_Empty(sp))
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
    if (is_Empty(sp))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char l[] = "(sdk){sndjn}sds[sdff]]";
    if (paranthesis(l))
    {
        cout << "Macthing " << endl;
    }
    else
    {
        cout << "not Mathcing" << endl;
    }

    return 0;
}
