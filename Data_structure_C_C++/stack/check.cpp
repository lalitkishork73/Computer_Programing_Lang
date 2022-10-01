#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class stack
{
public:
    int top;
    int size;
    char *arr;
};

int isEmpty(stack *sp)
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
int isFull(stack *sp)
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
char pop(stack *sp)
{
    if (isEmpty(sp))
    {
        cout << "staqck is khali " << endl;
    }
    else
    {
        char data = sp->arr[sp->top--];
        return data;
    }
}
void push(stack *sp, char data)
{
    if (isFull(sp))
    {
        cout << "stack is bhara " << endl;
    }
    else
    {
        sp->arr[++sp->top] = data;
    }
}
int stack_top(stack *sp)
{
    return sp->arr[sp->top];
}
int isOperator(char ch)
{
    if (ch == '*' || ch == '+' || ch == '/' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int presidence(char ch)
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
char *inToPost(char *fun)
{
    stack *sp = new stack();
    sp->size = 200;
    sp->top = -1;
    sp->arr = new char(sp->size);
    char *pstfx = new char(strlen(fun) + 1);
    int i = 0;
    int j = 0;
    while (fun[i] != '\0')
    {
        if (!isOperator(fun[i]))
        {
            pstfx[j++] = fun[i++];
        }
        else
        {
            if (presidence(fun[i]) > presidence(stack_top(sp)))
            {
                push(sp, fun[i++]);
            }
            else
            {
                pstfx[j++] = pop(sp);
            }
        }
    }
    while (!isEmpty(sp))
    {
        pstfx[j++] = pop(sp);
    }
    pstfx[j] = '\0';
    return pstfx;
}

int main()
{
    char * i = "x+y(p*y)";
    cout << "PostFIx : " << inToPost(i) << endl;

    return 0;
}