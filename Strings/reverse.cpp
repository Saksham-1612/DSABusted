// Reverse a string
#include <iostream>
#include <vector>
using namespace std;
void reverseString(vector<char> &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}
int main()
{
    vector<char> s{'s', 'a', 'b', 'c', 'd', 'e', 'f'};
    reverseString(s);
    // for (int x : s)
    // {
    //     cout << x << " ";
    // }
    return 0;
}