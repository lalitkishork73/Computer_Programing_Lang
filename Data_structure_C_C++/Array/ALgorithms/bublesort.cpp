#include <iostream>
using namespace std;

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "A :" << a[i] << endl;
    }
}
void bublesort(int *a, int n) //Second method
{
    for (int i = 0; i < n - 1; i++) //for(i=0;i<n,i++)
    {   
        cout<<"WOrking on pass No. "<<i+1<<endl;
        for (int j = 0; j < n - 1 - i; j++) //for(j=0;j<n;j++)
        {
            if (a[j] > a[j + 1]) //if(a[i]>a[j])
            {
                int temp;
                temp = a[j];     //temp=a[i];
                a[j] = a[j + 1]; //a[i]=a[j];
                a[j + 1] = temp; //a[j]=temp;
            }

        }
    }
}
void bublesortAdaptive(int *a, int n) //Second method
{
    int isSorted=0;
    for (int i = 0; i < n - 1; i++) //for(i=0;i<n,i++)
    {   
        cout<<"WOrking on pass No. "<<i+1<<endl;
        for (int j = 0; j < n - 1 - i; j++) //for(j=0;j<n;j++)
        {
            if (a[j] > a[j + 1]) //if(a[i]>a[j])
            {
                int temp;
                temp = a[j];     //temp=a[i];
                a[j] = a[j + 1]; //a[i]=a[j];
                a[j + 1] = temp; //a[j]=temp;
                isSorted=0;
            }
            if (isSorted)
            {
                return;
            }
            
        }
    }
}
int main()
{
    int A[] = {12, 25, 65, 7, 26, 9};
    int B[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    display(B, n);
    bublesort(B, n);
    bublesortAdaptive(B, n);
    cout << "sorting" << endl;
    display(B, n);

    return 0;
}