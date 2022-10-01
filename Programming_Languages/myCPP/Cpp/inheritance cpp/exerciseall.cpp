#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
    protected:
        int a1;
        int b1;
    public:
        void Get_data1()
        {
            cout<<"enter the data of A : "<<endl;
            cin>>a1;
            cout<<"enter the data of B : "<<endl;
            cin>>b1;
        }
        // void simpleCalculator1(int x,int y)
        // {
        //     a1=x;
        //     b1=y;
        // }

};
class ScientificCalculator
{
    protected:
        int a2;
        int b2;
    public:
        void Get_data2()
        {
            cout<<"enter the data of A : "<<endl;
            cin>>a2;
            cout<<"enter the data of B : "<<endl;
            cin>>b2;
        }
        // void ScientificCalculator1(int x,int y)
        // {
        //     a2=x;
        //     b2=y;
        // }
            
};
class Result:public SimpleCalculator,public ScientificCalculator
{
    public:
        void sum()
        {
            cout<<"the sum is :"<<a1+b1<<endl;
        }
        void sub()
        {
            cout<<"the substrtion is :"<<a1-b1<<endl;
        }
        void mul()
        {
            cout<<"the multiplication is :"<<a1*b1<<endl;
        }
        void div()
        {
            cout<<"the division  is :"<<a1/b1<<endl;
        }
        void squr()
        {
            cout<<"the squr of a:"<<(a2)*(a2)<<endl;
            cout<<"the squr of b:"<<b2*b2<<endl;
        }
        void squr_root()
        {
            cout<<"the sqrt is :"<<sqrt((a2)+(b2))<<endl;
        }
        void cosA()
        {
            cout<<"the cos(a) is :"<<sqrt(cos(a1))<<endl;
            cout<<"the cos(b) is :"<<sqrt(cos(b1))<<endl;
        }

};

int main()
{
    // int x,y;
    Result cal;
    // cal.simpleCalculator1(4,5);
    cal.Get_data1();
    cal.cosA();
    cal.sum();
    // cal.ScientificCalculator1(25,4); 
    cal.Get_data2();
    cal.squr();
     
    return 0;
}