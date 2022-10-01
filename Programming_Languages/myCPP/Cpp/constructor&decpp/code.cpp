#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a, b;
    friend void distance(point,point);

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "(" << a << "," << b << ")" << endl;
    }
};

void distance(point oc1,point oc2)
{
    int dis1,dis2,sum,sqr1,sqr2;
    dis1=oc2.a-oc1.a;
    dis2=oc2.b-oc1.b;
    sqr1=dis1*dis1;
    sqr2=dis2*dis2;
    sum=sqr1+sqr2;
    double result=sqrt(sum);
    cout<<result<<endl;

}

int main()
{
    point p(4, 5);
    p.display();
    point q(5, 6);
    q.display();
    distance(p,q);
    return 0;
}