#include <bits/stdc++.h>
using namespace std;
int binarySearching(int arr[], int s, int e, int target)
{
    if (s >= e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return 1;
    }
    else if (arr[mid] < target)
    {
        binarySearching(arr, mid + 1, e, target);
    }
    else
    {
        binarySearching(arr, s, mid - 1, target);
    }
}
int main()
{
    int arr[] = {1, 5, 2, 6, 7, 3};
    int target, n = 6, i = 0;
    sort(arr, arr + n);
    cout << "Enter the target = ";
    cin >> target;
    cout << binarySearching(arr, 0, 5, target);
    return 0;
}