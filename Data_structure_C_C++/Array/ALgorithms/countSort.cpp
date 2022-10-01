#include <iostream>
#include <algorithm>
using namespace std;

void display(int *A, int n)
{
    cout << "start From hare " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Elment: " << A[i] << endl;
    }
}
int maximum(int *A, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}
void countSort(int *A, int n)
{
    int i, j;
    int max;
    max = maximum(A, n);
    int *count = new int(max + 1);
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }
    i = 0;
    j = 0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int A[] = {9, 2, 8, 1, 16, 44, 6};
    int n = 7;
    display(A, n);
    countSort(A, n);
    display(A, n);
    return 0;
}