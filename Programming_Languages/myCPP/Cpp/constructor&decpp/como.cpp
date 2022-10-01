#include<iostream>
using namespace std;

class two;
class one
{
    int pop1;
    
    // friend int add(one &,two &);
    friend void exchange(one &,two &);
    public:
        void setValue(int value)
        {
            pop1=value;
        }
        void display()
        {
            cout<<"X="<<pop1<<endl;
        }
};
class two
{
    int pop2;
    // friend int add(one &,two &);
    friend void exchange(one &,two &);
    public:
        void setValue(int value)
        {
            pop2=value;
        }
        void display()
        {
            cout<<"Y="<<pop2<<endl;
        }
};

// int add(one x,two y)
// {
//     retutn x.data+y.num;
// }
void exchange(one &x,two &y)
{
    int temp;
    temp=x.pop1;
    x.pop1=y.pop2;
    y.pop2=temp; 
}
int main()
{
    one x;
    two y;

    x.setValue(25);
    x.display(); 
    y.setValue(10);
    y.display(); 
    cout<<"after exchange"<<endl;
    exchange(x,y);
    x.display(); 
    y.display();
    return 0;

}