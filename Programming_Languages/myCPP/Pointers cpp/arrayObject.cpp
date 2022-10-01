#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
    public:
        void Set_data(int a,float b)
        {
            id=a;
            price=b;
        }
        void get_data(void)
        {
            cout<<"code of this item is "<<id<<endl;
            cout<<"code of this price is "<<price<<endl;
        }

};

int main()
{
    int size=3,p;
    float q; 
    ShopItem *ptr=new ShopItem[size];
    ShopItem *ptrTemp=ptr;
    for (int i = 1; i < size; i++)
    {
        cout<<"Id and Price of item"<<i+1<<endl;
        cin>>p>>q;
        ptr->Set_data(p,q);
        ptr++;
    }
    for (int i = 1; i < size; i++)
    {
        cout<<"item numer: "<<i+1<<endl;
        ptrTemp->get_data();
        ptrTemp++;
    }
    
    return 0;
}