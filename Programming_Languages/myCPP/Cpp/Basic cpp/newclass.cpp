#include<iostream>
using namespace std;

class convert
{
private:
    int bin_to_dec(void);
public:
   long n;
    int dec=0, i=0, rem;
    int input(long long n)
    {   
        cin>>n;
        return n;
    }
     void display(void)
    {
        cout<<bin_to_dec()<<endl;
    }


};
int convert:: bin_to_dec()
{   
    int n;
    n=input(n);
     while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}



int main()
{ 

    cout<<"enter binary to convert in decimal"<<endl;
    convert N;
    N.input();
    N.display();
    return 0;
}