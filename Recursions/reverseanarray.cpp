#include <bits/stdc++.h>
using namespace std;
void f(int arr[], int head, int tail)
{
    if (head >= tail / 2)
    {
        return;
    }
    swap(arr[head], arr[tail - head - 1]);
    f(arr, head + 1, tail);
}
int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int head = 0;
    int tail = n;
    f(arr, head, tail);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}