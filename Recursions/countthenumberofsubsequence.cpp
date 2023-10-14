#include <bits/stdc++.h>
using namespace std;
int f(int i, int arr[], int s, int sum, int n)
{
    if (i == n)
    {
        // satisfied
        if (s == sum)
        {
            return 1;
        }
        // not satisfied
        return 0;
    }
    s += arr[i];
    int l = f(i + 1, arr, s, sum, n);
    s -= arr[i];
    int r = f(i + 1, arr, s, sum, n);
    return l + r;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3, sum = 2;
    vector<int> ds;
    cout << f(0, arr, 0, sum, n);
    return 0;
}