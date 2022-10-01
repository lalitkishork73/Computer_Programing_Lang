#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr;
    ptr = &a;

    cout << "the value of a is " << a << endl;
    cout << "the value of a is " << ptr << endl;
    cout << "the value of a is " << *ptr << endl;
    cout << "the value of a is " << &a << endl;

    // int *ptr=new int(40);
    // cout<<"the value of a is "<<*ptr<<endl;
    // cout<<"the value of a is"<<ptr<<endl;
    float *pt = new float(4.66);
    cout << "the value of a is" << pt << endl;
    cout << "the value of a is" << *(pt) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    delete[] arr;
    cout << "the value arr[0] is " << arr[0] << endl;
    cout << "the value arr[adress] is " << arr << endl;
    cout << "the value arr[1] is " << arr[1] << endl;
    cout << "the value arr[adress] is " << arr + 1 << endl;
    cout << "the value arr[2] is " << arr[2] << endl;
    cout << "the value arr[adress] is " << arr + 2 << endl;
    cout << "the value arr[3] is " << arr[3] << endl;
    cout << "the value arr[adress] is " << arr + 3 << endl;

    return 0;
}