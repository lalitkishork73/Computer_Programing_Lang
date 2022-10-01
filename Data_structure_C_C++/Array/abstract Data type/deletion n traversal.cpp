#include<iostream>
using namespace std;

traversal(int arr[],int size)
{
    for (int i =0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int deletion(int arr[],int size,int index)
{
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;    
}

int main()
{
    int arr[50]={1,5,9,3,5,7}; 
    int size=6;
    int index=2;
    traversal(arr,size);
    cout<<"next level"<<endl;
    deletion(arr,size,index);
    size-=1;
    traversal(arr,size);
    
    return 0;
}