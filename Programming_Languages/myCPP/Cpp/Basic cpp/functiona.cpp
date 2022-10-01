#include<iostream>
#define PI 3.14
using namespace std;


int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int volume(double r, int h)
{
    return (PI*r*r*h);
}
int circle(double r)
{
    return (PI*r*r);
}
int main()
{
    int a,b,c;
    cout<<"enter the numbers "<<endl;
    cin>>a>>b>>c;
    cout<<"the sum of two number is "<<sum(a,b)<<endl;
    cout<<"the sum of three number is "<<sum(a,b,c)<<endl;
    cout<<"the volume of cylinder is"<<volume(double(a),b)<<endl;
    cout<<"the area of circle is"<<circle(double(a))<<endl;
    return 0;
}