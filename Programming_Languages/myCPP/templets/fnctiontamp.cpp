#include <iostream>
using namespace std;

/*float funcAverage(int a,int b)
{
    float avg=(a+b)/2.0;
    return avg;
}

float funcAverage2(int a,float b)
{
    float avg=(a+b)/2.0;
    return avg;
}
*/
// funciton Tamplates--->

/*template <class T1, class T2>
float funcAverage2(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
*/
template<class T>
void swapp(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    // float a;
    // a = funcAverage2(5, 2.5);
    // cout << a;
    cout<<"swap two numbers"<<endl;
    int x,y;
    cin>>x>>y;
    cout<<"X="<<x<<" || y="<<y<<endl;
    swapp(x,y);
    cout<<"X="<<x<<" || y="<<y<<endl;
    return 0;
}