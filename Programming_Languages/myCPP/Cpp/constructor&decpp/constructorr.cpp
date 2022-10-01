#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend void add(complex, complex);

public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    void print()
    {
        cout << "your number is (" << a << "+" << b << "i)" << endl;
    }
};
void add(complex oc1, complex oc2)
{
    int sum_num = oc1.a + oc2.a;
    int sum_img = oc1.b + oc2.b;

    cout << "(" << sum_num << "+" << sum_img << "i)" << endl;
}

int main()
{
    complex x(1, 2);
    x.print();
    complex y(11, 25);
    y.print();
    add(x, y);
    complex z(5);
    z.print();
    complex q;
    q.print();

    return 0;
}