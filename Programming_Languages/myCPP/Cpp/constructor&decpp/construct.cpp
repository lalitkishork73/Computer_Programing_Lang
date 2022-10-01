#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);
        void printData()
        {
            cout << "your name is: " << a << "+" << b << "i" << endl;
        }
};
complex ::complex(void)
{
    a = 1;
    b = 2;
}
int main()
{
    complex a,b,c,d;
    a.printData();
    b.printData();
    c.printData();
    d.printData();

    return 0;
}