// ?Find the Pivot in the array
#include <iostream>
#include <vector>
using namespace std;
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
    int answer = findPivot(arr, size);
    cout << answer << endl;
    return 0;
}