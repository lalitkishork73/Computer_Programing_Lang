#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return factorial(n-2)+factorial(n-1);
}
int fobinacci(int n)
{
    if (n<2)
    {
        return 1;
    }
    else
    {
       return n*fobinacci(n-1);
    }
    
}
int main()
{int n;
cout<<"enter the value of N="<<endl;
cin>>n;
cout<<"the Factorial of N= "<<n<<" is "<<factorial(n)<<endl;
cout<<"the Fobinacci of N= "<<n<<" is "<<fobinacci(n)<<endl;


return 0;
}