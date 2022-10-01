#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "the value of base1 is " << base1int << endl;
        cout << "the value of base2 is " << base2int << endl;
        cout << "the sum of the value is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived sum;
    sum.set_base1int(25);
    sum.set_base2int(15);
    sum.show();

    return 0;
}