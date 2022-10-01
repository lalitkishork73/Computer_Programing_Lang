#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<< endl;
    }
}
int main()
{
    list<int> list1;
    list<int> list2(7);
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(6);
    list1.push_back(8);
    display(list1);
  
    return 0;
}