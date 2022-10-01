#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1(int);
    int getData2();
};
void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::getData1(int y)
{
    int x = data1;
    x = y;
    return x;
}
int Base::getData2()
{
    return data2;
}
class Derived : Base
{
    int data3;

public:
    void process();
    void display();
};
// class Derived :public Base
// {
//     int data3;
//     public:
//         void process();
//         void display();
// };
void Derived::process()
{
    setData();
    data3 = data2 * getData1(25);
}
void Derived::display()
{
    cout << "the value of data 1 is" << getData1(25) << endl;
    cout << "the value of data 1 is" << data2 << endl;
    cout << "the value of data 1 is" << data3 << endl;
}
int main()
{
    Derived mango;
    // mango.setData();
    mango.process();
    mango.display();

    return 0;
}