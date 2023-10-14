#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int i = m + 1, j = arr.size() - 1;

    int mid = (i + j) / 2;
    for (; i <= mid; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 3);
    for (auto item : arr)
    {
        cout << item << " ";
    }
    return 0;
}