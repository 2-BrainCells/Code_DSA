#include <bits/stdc++.h>
using namespace std;
string replaceSpaces(string &str)
{
    // Write your code here.
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp = temp + "@40";
        }
        else
        {
            temp = temp + str[i];
        }
    } 
    return temp;
}
int main()
{
    string str = "I love coding";
    string temp = replaceSpaces(str);
    cout << temp;
    return 0;
}