#include <iostream>
using namespace std;

void insertionSort(int *A, int n)
{
    int key, j;
    for (int i = 0; i < n ; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Elemnt :" << A[i] << endl;
    }
}
int main()
{
    int A[] = {12, 25, 45, 54, 7, 23, 9, 2, 1, 6};
    int n = 10;
    display(A, n);
    cout << "after insertion " << endl;
    insertionSort(A, n);
    display(A, n);
    return 0;
}