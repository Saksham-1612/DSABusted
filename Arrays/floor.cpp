#include <iostream>
#include <vector>
using namespace std;
int floor(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = (start / 2) + (end) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return end;
}
int main()
{
    int size = 9;
    int arr[9] = {10, 12, 18, 20, 24, 30, 32, 36, 40};
    int target = 15;
    int answer = floor(arr, size, target);
    cout << answer << endl;
    return 0;
}
// links
// https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1/