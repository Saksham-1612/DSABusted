// Checking if an array is sorted roated or not
#include <iostream>
#include <vector>
using namespace std;

bool isSortedRotated(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
        if (arr[n - 1] > arr[0])
        {
            count++;
        }
        return count <= 1;
    }
}
int main()
{
    vector<int> arr{7, 6, 1, 2, 3, 4, 5};
    cout << isSortedRotated(arr) << endl;
    return 0;
}
// Question Link :https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/