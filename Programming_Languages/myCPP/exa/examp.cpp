#include<iostream>
using namespace std;

// int func(int &a,int &b)
// {
//     cout<<"enter a and b: "<<endl;
//     cin>>a>>b;
//     return a+b;
// }
string func2(string &name,int &a,int &b)
{
    cout<<" enter the name :"<<endl;
    cin>>name>>a>>b;
    cout<<a<<b<<endl;
    return name;
}
int main()
{   
    string Name;
    int num1,num2;
    
    // c=func(num1,num2);
    Name=func2(Name,num1,num2);
    // cout<<c<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<num1<<"||"<<num2<< Name<<endl;
    }
    return 0;
}