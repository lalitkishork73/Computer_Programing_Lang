#include <iostream>
using namespace std;

template <class T1, class T2>
class myCLass
{
public:
    T1 data1;
    T2 data2;
    myCLass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 <<" || "<< this->data2 << endl;
    }
};

int main()
{
    myCLass<int, char> obj(1, 'c');
    obj.display();
    return 0;
}