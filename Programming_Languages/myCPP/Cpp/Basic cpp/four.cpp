#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int *b=&a;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    
    return 0;
}