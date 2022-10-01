#include <iostream>
using namespace std;

class c2;
class c1
{
    int val1;
    friend void exchange(c1 &,c2 &);

public:
    void indata(int a)
    {
        val1 = a;
        
    }
    void display(void)
    {
        cout << val1 << endl;
    }

   
};
class c2
{
    int val2;
    friend void exchange(c1 &,c2 &);

public:
    void indata(int b)
    {
        val2 = b;
        
    }
    void display(void)
    {
        cout << val2 << endl;
    }
   
};


void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main()
{
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc1.display();
    oc2.indata(68);
    oc2.display();
    
    exchange(oc1, oc2);
    cout << "the value after exchanging become::: " << endl;
    oc1.display();
    cout << "the value after exchanging become::: " << endl;
    oc2.display();

    return 0;
}

// #include<iostream>
// using namespace std;

// class y;
// class x{
//     int data;
//     public:
//         void setValue(int value)
//         {
//             data=value;
//         }
//         friend void add(x,y);
// };
// class y{
//     int num;
//     public:
//         void setValue(int value)
//         {
//             num=value;
//         }
//         friend void add(x,y);
// };
// void add(x o1,y o2)
// {
//     cout<<"summing data of X and Y objects gives me:::"<<o1.data+o2.num<<endl;
// }
// int input_a()
// {
//     int a;
//     printf("enter the value of a:");
//     scanf("%d",&a);
//     return a;
// }
// int input_b()
// {
//     int b;
//     printf("enter the value of b:");
//     scanf("%d",&b);
//     return b;
// }

// int main()
// {
//     int a=input_a();
//     int b=input_b();
//     x a1;
//     a1.setValue(a);

//     y b1;
//     b1.setValue(b);
//     add(a1,b1);

//     return 0;
// }
