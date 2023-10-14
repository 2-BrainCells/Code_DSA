#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int key)
{
    int front = 0;
    int end = arr.size() - 1;
    int mid = front + ((end - front) / 2);
    while (front <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            front = mid + 1;
        }
        mid = front + ((end - front) / 2);
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 5, 7, 9, 10, 14, 15};
    int key = 14;
    int suiii = binarySearch(arr, key);
    cout << suiii;
    return 0;
}