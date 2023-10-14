#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size)
{
    ;
    bool rem;
    // base
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
    {
        rem = isSorted(arr + 1, size - 1);
    }
    return rem;
}

int main()
{
    int arr[6] = {1, 2, 3, 1, 6, 10};
    int size = 6;
    bool ans = isSorted(arr, size);
    cout << ans;
    return 0;
}