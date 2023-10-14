#include <bits/stdc++.h>
using namespace std;
// void checkPalindrome(string &s, int i)
// {
//     int n = s.length();
//     if (i > n - 1 - i)
//     {
//         return;
//     }
//     swap(s[i], s[n - i - 1]);
//     i++;
//     checkPlindrome(s, i);
// }
bool checkPalindrome(string str, int i, int j)
{
    if (i > j)
        return true;
    if (str[i] != str[j])
        return false;
    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}
int main()
{
    string s, s1;
    s = "abccccba";
    s1 = "abba";
    if (checkPalindrome(s, 0, s.length() - 1) == 1)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}