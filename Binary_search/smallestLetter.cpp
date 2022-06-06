// leetcode - problem
#include <iostream>
#include <vector>
using namespace std;
char smallest(char letters[], int size, char target)
{
    int start = 0;
    int end = size - 1;
    int mid = 0;
    while (start < end)
    {
        mid = (start) + (end - start / 2);
        if (letters[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return letters[start % size];
}
int main()
{
    char letters[3] = {'c', 'f', 'j'};
    int size = 3;
    char target = 'a';
    char result = smallest(letters, size, target);
    cout << result << endl;
    return 0;
}
// links
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/