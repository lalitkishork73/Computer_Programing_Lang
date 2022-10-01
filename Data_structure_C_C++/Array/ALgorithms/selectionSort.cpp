#include <iostream>
using namespace std;

void selectionSort(int *A, int n)
{
    int indexofMin, temp;
    cout << "running Selection" << endl;
    for (int i = 0; i < n-1; i++)
    {
        indexofMin = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[indexofMin])
            {
                indexofMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexofMin];
        A[indexofMin] = temp; 
    }
}
void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "display : " << A[i] << endl;
    }
}
int main()
{
    int A[] = {3, 5, 4, 2, 12, 4};
    int n = 6;
    display(A, n);
    selectionSort(A, n);
    display(A, n);
    return 0;
}