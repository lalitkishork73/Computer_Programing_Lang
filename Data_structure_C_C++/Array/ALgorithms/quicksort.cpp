#include<iostream>
using namespace std;

void display(int *A,int n)
{
    cout<<"start From hare "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Elment: "<<A[i]<<endl;
    }
    
}
int partition(int *A,int low,int high)
{
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;
    do
    {
        while (A[i]<=pivot)
        {
            i++;
        }
        while (A[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }    
    } while (i<j);
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}
void quickSort(int *A,int low,int high) 
{
    int partitionIndex;
    if (low<high)
    {
        partitionIndex=partition(A,low,high);
        quickSort(A,low,partitionIndex-1);
        quickSort(A,partitionIndex+1,high);
    }
    

}
int main()
{
    int A[] = {1,2,3,45,16,44,6};
    int n=7;
    display(A,n);
    quickSort(A, 0, n - 1);
    display(A, n);
    return 0;
}