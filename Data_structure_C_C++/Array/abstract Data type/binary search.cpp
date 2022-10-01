#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid < element])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 56, 64, 73, 123, 252, 444};
    int size = sizeof(arr) / sizeof(int);
    int element = 56;
    int searchIndex = binarySearch(arr, size, element);
    cout << "The element " << element << " was found at index " << searchIndex << endl;
    return 0;
}