#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int &, int &);
    void printData()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
complex::complex(int &x, int &y)
{

    for (int i = 0; i < 3; i++)
    {
        a = x;
        a++;
        printData();
        b = y;
        b++;
        printData();
    }
}
int main()
{
    int x,y;
    cout<<"enter the x & y"<<endl;
    cin>>x;
    cin>>y;
    complex a(x, y);
    complex b = complex(x, y);
  

    return 0;
}