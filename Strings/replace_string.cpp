// replace the spaces of string with @48
#include <iostream>
#include <vector>
using namespace std;

string replaceString(string &s)
{
    string temp = "";
    string replica = "@48";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == ' ')
        {
            temp = temp + replica;
        }
        else
        {
            temp = temp + ch;
        }
    }
    return temp;
}
int main()
{
    string s;
    s = "My name is Saksham";
    s = replaceString(s);
    cout << s << endl;
    return 0;
}
// Question links:https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=1