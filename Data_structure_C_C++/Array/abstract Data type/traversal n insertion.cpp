#include<iostream>
using namespace std;

void Display(int arr[],int n)
{ 
    // Traversal 
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int sortedInsertion(int arr[],int size,int element,int capacity,int index)
{    
    // Insertion 
    if(size>=capacity)
        {       
            return -1;
        }
    for (int i = size-1; i >=index; i--)
        {
            arr[i+1]=arr[i];
        }
    arr[index]=element;
    return 1;
}
int main()
{
    int arr[50]={1,2,3,4,5};
    int size=5,element=25;
    int index=2;
    Display(arr,size);
    sortedInsertion(arr,size,element,100,index);
    size +=1; 
    Display(arr,size);
    return 0;
}