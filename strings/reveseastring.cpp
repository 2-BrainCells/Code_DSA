#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.length(), i = 0, j = 0;
        while (i <= n && j <= n)
        {
            if (s[j] == ' ' || s[j] == '\0')
            {
                cout << s.substr(i, j);
                i = j;
                j = j + 1;
            }
            else
            {
                j++;
            }
        }
        // reverse(s.begin(), s.end());
        // return s;
    }
};
int main()
{
    Solution s;
    cout << s.reverseWords("The sky is blue");

    return 0;
}