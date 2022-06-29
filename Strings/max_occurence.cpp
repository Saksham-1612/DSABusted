// Finding the maximum occurence of character
#include <iostream>
#include <vector>
using namespace std;

char getMaxOccurence(string s)
{
    int arr[26] = {0};

    // an array for count of integers
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    //  find maximum occurence of character
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    char answer = 'a' + ans;
    return answer;
}
int main()
{
    string s;
    cin >> s;
    cout << getMaxOccurence(s) << endl;
    return 0;
}
// Question link:https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1