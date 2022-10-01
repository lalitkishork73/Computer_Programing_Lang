#include<iostream>
using namespace std;

class stack
{
    int top;
    int size;
    int arr*;
};
int parenthesis(char *exp)
{
    stack *sp = new stack();
    for (int i = 0;exp[i]!='\0'; i++)
    {
        if (exp[i]=='(')
        {
            push(sp,exp[i]);
        }
        else if (exp[i]==')')
        {
            if(IsEmpty(sp))
            {
                return 0;
            }
        }
        
    }
    
}