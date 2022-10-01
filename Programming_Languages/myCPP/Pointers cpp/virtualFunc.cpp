#include<iostream>
using namespace std;
class Base
{
    public:
        int var1;
        virtual void diplay()
        {
            cout<<"1 namste trump "<<var1<<endl;
        }

};
class Derived : public Base
{
    public:
        int var2;
        void diplay()
        {
            cout<<"2 namste trump "<<var1<<endl;
            cout<<"3 namste trump "<<var2<<endl;
        }

};

int main()
{
    Base *BC_ptr;
    Base obj_base;
    Derived obj_derived;
    BC_ptr=&obj_derived;
    BC_ptr->var1=34;
    BC_ptr->diplay();

    Derived *DC_ptr;
    DC_ptr=&obj_derived;
    DC_ptr->var1=25; 
    DC_ptr->var2=36;
    DC_ptr->diplay();

    return 0; 
}