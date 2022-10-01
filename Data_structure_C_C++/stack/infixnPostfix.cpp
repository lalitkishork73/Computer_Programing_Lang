#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class stack
{
    public:
        int top;
        int size;
        char *arr;
};

int IsEmpty(stack *sp)
{
    if (sp->top==-1)
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
    if (sp->top==sp->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void push(stack *sp,char data)
{
    if (IsFull(sp))
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        sp->arr[++sp->top]=data;
    }
    
}
char pop(stack *sp)
{
    if (IsEmpty(sp))
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        char data=sp->arr[sp->top--];
        return data;
    }
}
int stacktop(stack *sp)
{
    return sp->arr[sp->top]; 
}
int isOperator(char ch)
{
    if (ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int precedence(char ch)
{
    if(ch=='*'||ch=='/')
    {
        return 3;
    }
    else if (ch=='+'||ch=='-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
    
}
char *infixToPostfix(char *infix)
{
    stack *sp=new stack();
    sp->size=455;
    sp->top=-1;
    sp->arr=new char(sp->size);
    char *postfix=new char(strlen(infix)+1);
    int i=0;
    int j=0;
    while (infix[i]!='\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else
        {
            if (precedence(infix[i])>precedence(stacktop(sp)))
            {
                push(sp,infix[i++]);
            }
            else{
                postfix[j++]=pop(sp);
            }
            
        }
        
    }
    while (!IsEmpty(sp))
    {
        postfix[j++]=pop(sp);
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    char * i="a-b+t/6";
    cout<<"postfix is : "<<infixToPostfix(i)<<endl;
    return 0;
}