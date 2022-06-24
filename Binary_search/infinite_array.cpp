// Find position of an element in a sorted array of infinite numbers
// ! We are asumming that array is infinite because its impossible to code an infinite array
int BinarySearch(int arr[], int start, int chunk, int target)
{
    int end = (start + chunk) - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 6, 8, 9, 15, 30, 35, 40, 50, 55};
    int target = 40;
    int chunk = 2;
    int answer = -1;
    int start = 0;
    while (answer == -1)
    {
        answer = BinarySearch(arr, start, chunk, target);
        start = start + chunk;
        chunk = chunk * 2;
    }
    cout << answer << endl;
    return 0;
}

// ?Question Link:https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/