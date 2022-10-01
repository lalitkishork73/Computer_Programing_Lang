#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class lalit
{
public:
    T1 a;
    T2 b;
    lalit(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};

int main()
{
    lalit <> l(4,1.6);
    l.display();

    return 0;
}