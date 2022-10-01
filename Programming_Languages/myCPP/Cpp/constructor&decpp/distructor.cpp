#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when my destructor is ccalled object number" << count << endl;
        count--;
    }
};

int main()
{
    cout<<" we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"creating two more objects"<<endl;
        cout<<"entring thi block"<<endl;
        num n2,n3,n4,p1;
        cout<<"exiting thi block"<<endl;
    }
    cout<<"back to main"<< endl;
    return 0;
}