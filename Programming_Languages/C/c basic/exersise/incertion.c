#include<stdio.h>

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);    /* code */
    }
    printf("\n");
    
}
int indIncertion(int arr[],int size,int index,int element){

    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[index]+=1;
    arr[index]=element;


    return element;

}
int main()
{
    int arr[100]={7,8,12,27, 88};
    int size=5,element=45,index=3;
    display(arr,5);
    indIncertion(arr,size,index,56);
    size +=1;
    display(arr,size);
    return 0;
}