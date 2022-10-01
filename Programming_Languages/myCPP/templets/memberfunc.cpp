#include<iostream>
using namespace std;

template<class T>
class lalit
{
    public:
        T data;
        lalit(T a)
        {
            data=a;
        }
        void display();
};
template<class T>
void lalit<T>::display()
{
    cout<<data<<endl;
}

int main()
{
    lalit<long long>l(51516378785416513);
    l.display();
    return 0;
}