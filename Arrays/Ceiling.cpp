#include <iostream>
using namespace std;
// first approach
int Ceiling(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = 0;
    int ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
// Another Approach
int Ceiling2(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
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
    return start;
}
int main()
{
    int arr[7] = {5, 6, 8, 12, 18, 20, 24};
    int size = 7;
    int target = 15;
    int answer = Ceiling(arr, size, target);
    cout << answer << endl;
    answer = Ceiling2(arr, size, target);
    cout << answer << endl;
    return 0;
}
// Link for Question
// https://leetcode.com/problems/search-insert-position/discuss/1729111/java-100-ceiling-of-number