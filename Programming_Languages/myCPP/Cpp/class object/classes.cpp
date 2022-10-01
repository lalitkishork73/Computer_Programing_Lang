
 #include<iostream>
#include<string>
using namespace std;

class parent{
    public:
    int z;  
    void addition(void);
};
class child:public parent{
    public:
    void multiplication(void);

};
class grandchild:public child{
    public:
    void substraction(void);

};
void parent::addition()
{   

    int x;
    int y;
    parent out;
    cout<<"enter X" <<endl;
    cin>>x;
    cout<<"enter Y" <<endl;
    cin>>y;
    out.z=x+y;
    cout<<out.z<<endl;
}
void child::multiplication()
{   int x;
    int y;
    parent out;
   for (int i = 0; i<=4; i++)
   {    
        cout<<"enter X" <<endl;
        cin>>x;
        cout<<"enter Y" <<endl;
        cin>>y;
        if(x>y)
        {
            out.z=x+y;
            cout<<out.z<<endl; 

        }
        else if(x==y)
        {
            cout<<"world is belongs to thanos"<<endl;
        }
        else if(x||y)
        {
            cout<<"chal be bhediye"<<endl;
        }     cout<<"work"<<endl;
   }      
    cout<<"work"<<endl;
    cout<<"work"<<endl;
}    
void grandchild::substraction()
{
    int x;
    int y;
    cout<<"enter X" <<endl;
     cin>>x;
    cout<<"enter Y" <<endl;
    cin>>y;
    cout<<x-y<<endl;
}
int main()
{
    grandchild plus;
    grandchild mul;
    grandchild sub;

    plus.addition();
    mul.multiplication();
    sub.substraction();
    cout << "game of throne with thanos and just because we spent lots of time togather thats not mean that you will become a savior"<<endl;
    return 0;
}