#include <bits/stdc++.h>
using namespace std;
void reverseString(string &s, int i, int j)
{
    cout << s << endl;
    if (i > j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;
    reverseString(s, i, j);
}
int main()
{
    string s = "abcde";
    int size = s.length() - 1;
    reverseString(s, 0, size);
    cout << s;
    return 0;
}