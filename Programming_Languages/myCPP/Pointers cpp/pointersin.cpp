// this pointer
#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        // void Set_data(int a)
        // {
        //     this->a=a;
        // }
        A& Set_data(int a)
        {
            this->a=a;
            return *this;
        }
        void Get_data()
        {
            cout<<"the value of a is "<<a<<endl;
        }
};

int main()
{
    A a;
    a.Set_data(25).Get_data();
    // a.Get_data();
    return 0;
}