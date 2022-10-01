#include <iostream>
using namespace std;

void display(int *A, int n)
{
    cout << "start From hare " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Elment: " << A[i] << endl;
    }
}
void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[1000];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}
void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    int A[] = {5, 7, 3, 11,25,45, 1, 2, 6};
    int n = 8;
    display(A, n);
    mergeSort(A, 0, n);
    display(A, n);
    return 0;
}