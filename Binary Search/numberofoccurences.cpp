#include <bits/stdc++.h>
using namespace std;

int leftSide(vector<int> &arr, int k)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int rightSide(vector<int> &arr, int k)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int count(vector<int> &arr, int n, int x)
{
    // Write Your Code Here
    int n1 = rightSide(arr, x);
    int n2 = leftSide(arr, x);
    int ans;
    if (n2 != -1 || n1 != -1)
    {
        ans = 0;
    }
    else
    {
        ans = n1 - n2 + 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 4, 5};
    int x = 5;
    cout << count(arr, 5, x);
}
