#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        
    }
    void print_Data1(void)
    {
        cout << "the value of Data is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
    }
    void print_Data2(void)
    {
        cout << "the value of Data is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int Derived1, Derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        Derived1 = c;
        Derived2 = d;
        cout << "the Drived Class construction called" << endl;
    }
    void print_Data_D(void)
    {
        cout << "the value of Derived1 is " << Derived1 << endl;
        cout << "the value of Derived2 is " << Derived2 << endl;
    }
};
int main()
{
    Derived lalit(4, 2, 5, 6);
    lalit.print_Data1();
    lalit.print_Data2();
    lalit.print_Data_D();

    return 0;
}