#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = 0;
    int ans = -1;
    while (start <= end)
    {
        mid = (start) + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int lastOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = 0;
    int ans = -1;
    while (start <= end)
    {
        mid = (start) + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] >= target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // int arr[9] = {5, 7, 7, 7, 7, 8, 8, 9, 10};
    // int target = 7;
    // int size = 9;
    int arr[6] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int size = 6;
    int firstOccurenceIndex = firstOccurence(arr, size, target);
    int lastOccurenceIndex = lastOccurence(arr, size, target);
    cout << firstOccurenceIndex << endl;
    cout << lastOccurenceIndex << endl;
    return 0;
}
