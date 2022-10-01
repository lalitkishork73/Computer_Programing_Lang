#include<iostream>
using namespace std;

class lalit
{
    public:
     int index,size,element;
     int arr[100]={1,2,3,4,5,6,77};
     }

};
display(int arr[],int n)
     {
         for (int i = 0; i < n; i++)
         {
            cout<<arr[i]<<endl;
         }
     }
     int indIncertion(int arr[],int size,int index,int element,int capacity)
     {
         if (size>=capacity)
         {
            return -1;
         }
         for (int i = size-1; i >=index; i--)
            {
                 arr[i+1]=arr[i];
            }
            arr[index]=element;
            return 1;
         

int main()
{
    lalit a; 
    a->size=5;
    a->element=12;
    a->index=3;
    a->indIncertion(a.arr,a.size,a.element,100,a.index);
    a->size+=1;
    cout<<"this is Second wave"<<endl;
    a->display(a.arr,a.size);
    return 0;

}