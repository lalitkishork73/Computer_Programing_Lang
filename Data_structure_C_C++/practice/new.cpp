#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int size;
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
void Push(Stack *sp, char val)
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
        cout << "stack is full" << endl;
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

    if (a == '{' && b == '}')
    {
        return 1;
    }

    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}
int paranthesis(char *exp)
{
    Stack *sp = new Stack();
    sp->top = -1;
    sp->size = 101;
    sp->arr = new char[sp->size];
    char poped;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            Push(sp, exp[i]);
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
    else
    {
        return 0;
    }
}
int isOperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int presedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
char stackTop(Stack *sp)
{
    return (sp->arr[sp->top]);
}
char *infixon(char *infix)
{
    Stack *sp = new Stack();
    sp->top = -1;
    sp->size = 20;
    sp->arr = new char[sp->size];

    char *postfix = new char[sp->size+1];
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (presedence(infix[i]) > presedence(stackTop(sp)))
            {
                Push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!is_Empty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *sp = "x-y/z-k*d";
    cout << sp << endl;
    cout << infixon(sp) << endl;

    /*   if (paranthesis(sp))

      {
          cout << "mathching" << endl;
      }
      else
      {
          cout << "not mathching" << endl;
      } */

    cout << sp << " postFix :" << infixon(sp) << endl;
}
