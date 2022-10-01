#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

template <class T1, class T2>
class Stack
{
public:
    T1 size;
    T1 top;
    T2 *arr;
    Stack(T1 a, T1 b)
    {
        size=a;
        top=b;
        arr=new T2[size];
    }

    int is_Empty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int is_Full()
    {
        if (top == size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void push(char val)
    {
        if (is_Full())
        {
            cout << "full" << endl;
        }
        else
        {
            arr[++top] = val;
        }
    }
    char pop()
    {
        if (is_Empty())
        {
            cout << "empty" << endl;
        }
        else
        {
            char val = arr[top];
            top--;
            return val;
        }
    }
    int precedence(char ch)
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
    int isOpretor(char ch)
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
    int Stacktop()
    {
        return top;
    }
    char infixon(char *infix)
    {

        int i = 0, j = 0;

        char postfix = new char[infix+1];
        while (arr[i] != '\0')
        {
            if (!isOpretor(arr[i]))
            {
                postfix[j] = arr[i];
                j++;
                i++;
            }
            else
            {
                if (precedence(arr[i]) > precedence(Stacktop()))
                {
                    push(arr[i]);
                    i++;
                }
                else
                {
                    postfix[j] = pop();
                    j++;
                }
            }
        }
        while (!is_Empty())
        {
            postfix[j] = pop();
            j++;
        }
        postfix[j] = '\0';
        return postfix;
    }
};
int main()
{
    Stack<int, char> sp(20,-1);
    char s[20] = {"a+b*c/d"};
    cout << "infix: " << s << endl;
    cout << "postfix: " << sp.infixon(s) << endl;

    return 0;
}
