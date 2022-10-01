#include <iostream>
using namespace std;

class Base1
{
    public:
       virtual void greet()
        {
            cout << "How are you ? " << endl;
        }
};
class Base2
{
    public:
        void greet()
        {
            cout << "kaise ho logo ? " << endl;
        }
};
class Derived : public Base1, public Base2
{
    int a;
    public:
        void greet()
        {
            Base1::greet();
        }
};
class B
{
    public:
        void say()
        {
            cout<<"hello world logo "<<endl;
        }
};
class D: public B
{   int a;
    public:
        void say()
        {
            cout<<"hello my becutiful people "<<endl;
        }

};
int main()
{
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    Derived d;
    d.greet();
    B j;
    j.say();
    D g;
    g.say();

    return 0;
}