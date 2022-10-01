#include<iostream>
#include<string>
using namespace std;

{
int linearSearch(int arr[],int size,int element)
    for (int i = 0; i<size; i++)
    {
        if (arr[i]==element)
        {
            return i; 
        }
    }
   
    return -1;
    
}
// void traversal(int arr[],int size)
// {
//     for (int i = 0; i <= size; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
// }

int main()
{
    int arr[50]={1,2,3,4,5,6,7,8,9,10};
    int size,element=1;
    size=sizeof(arr)/sizeof(int);
    cout<<"before"<<endl;
    int searchIndex = linearSearch(arr,size,element);
    cout<<"the element "<<element<<" was found at "<<searchIndex<<endl;
    return 0;
}