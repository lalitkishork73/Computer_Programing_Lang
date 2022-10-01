#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData(void)
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr=new Complex;
    // c1.setData(5, 51);
    (*ptr).setData(15, 51);
    (*ptr).getData();
    ptr->setData(9, 51);
    ptr->getData();
    // c1.getData();

    // array of objects
    Complex *ptr1=new Complex[4];
    ptr1->setData(4,6);
    ptr1->getData();
    return 0;
}