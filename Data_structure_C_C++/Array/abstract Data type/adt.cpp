#include<iostream>
using namespace std;

class myArray
{
    public:
        int total_size;
        int used_size;
        int *ptr;
}; 
void createArray(myArray *a, int tSize, int uSize)
{
    a->total_size=tSize;
    a->used_size=uSize;
    int *ptr=new int(tSize); 
}
void show(myArray *a)
{
    for (int i = 0; i <a->used_size; i++)
    {
        cout<<a->ptr[i]<<endl;
    }
    
}
void setVal(myArray *a)
{
    for (int i = 0; i <a->used_size; i++)
    {
        cout<<"enter the elemnts"<<endl;
        cin>>a->ptr[i+2];
    }
    
}
int main()
{
    myArray marks;
    createArray(&marks,10 ,5);
    setVal(&marks);
    show(&marks);
    return 0;

}