#include<stdio.h>
#include<stdlib.h>
int linearSearch(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {   
        if (arr[i]==element)
        {
            return i;
        }
        else 
            return -1;
        
    }
}
int binarySearch(int arr[],int size,int element)
{
    int low=0,mid,high=size-1;

    while (low<=high)
    {
            mid=(low+high)/2;
        if (arr[mid]==element)
            {
                return mid;
            }
        if (arr[mid]<element)
            {
                low=mid+1;
            }    
        else
            {
                high=mid-1;
            }    
    }

    return -1;
    
}

int main()
{
    int arr[]={1,3,5,6,10,13,25,35,44,54,65,84};
    int size=sizeof(arr)/sizeof(int);
    int element=84;
    int searchIndex=binarySearch(arr,size,element);
    printf("the element %d was found at index %d\n",element,searchIndex);
    return 0;
} 
 