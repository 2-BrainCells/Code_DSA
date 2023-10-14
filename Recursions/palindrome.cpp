#include <bits/stdc++.h>
using namespace std;
bool f(string &s, int i, int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    f(s, i + 1, n);
}
int main()
{
    string s = "racecar";
    string s1 = s;
    int n = s.length();
    std::cout << f(s1, 0 , n);
    return 0;
}