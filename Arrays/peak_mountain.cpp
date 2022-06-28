// finding peak of a mountain array
#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
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
    vector<int> arr{0, 10, 5, 2};
    int index = peakIndexInMountainArray(arr);
    cout << index << endl;
    return 0;
}
// Question Link :https://leetcode.com/problems/peak-index-in-a-mountain-array/