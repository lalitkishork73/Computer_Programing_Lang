#include<iostream>
using namespace std;

class Triangle
{
    int Perimeter,area;
    public:
        Triangle(int &a,int &b, int &c)
        {
            Perimeter=a+b+c;
            area=Perimeter/2;

        }
        void print()
        {
            cout<<"Perimeter: "<<Perimeter<<endl
                <<"Area: "<<area<<endl;
        }

};

int main()
{
    int x,y,z;
    cout<<"enter three sides of traingle "<<endl;
    cin>>x>>y>>z;
    Triangle one(x,y,z);
    one.print();
    return 0;
}