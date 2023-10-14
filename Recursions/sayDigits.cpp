#include <bits/stdc++.h>
using namespace std;
void sayInwords(int n, string mapDig[])
{

    if (n == 0)
    {
        return;
    }
    int d = n % 10;
    n = n / 10;
    sayInwords(n, mapDig);
    cout << mapDig[d];
}
int main()
{
    string mapDig[10] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string ans = "";
    sayInwords(123, mapDig);
    // cout << ans;
    return 0;
}