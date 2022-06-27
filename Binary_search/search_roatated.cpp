// ?Search in Rotated Sorted array
#include <iostream>
#include <vector>
using namespace std;
// Normal Binary Search
int binarySearch(int arr[], int start, int end, int target)
{
    int mid = 0;
    while (start <= end)
    {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

// finding pivot
int findPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = 0;
    while (start < end)
    {
        mid = (start / 2) + (end) / 2;
        if (arr[mid] >= arr[start])
        // In First Line
        {
            start = mid + 1;
        }
        else
        // In Second Line
        {
            end = mid;
        }
    }
    return start;
}
int main()
{
    int size = 6;
    int arr[6] = {3, 8, 10, 17, 19, 1};
    int pivot = findPivot(arr, size);
    cout << "The Pivot is at : " << pivot << " the number is " << arr[pivot] << endl;
    int index1 = binarySearch(arr, 0, pivot, 17);
    int index2 = binarySearch(arr, (pivot + 1), (size - 1), 17);
    if (index1 == -1)
        cout << index2 << endl;
    else
        cout << index1 << endl;
    return 0;
}