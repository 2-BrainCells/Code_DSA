#include <bits/stdc++.h>
using namespace std;
void subsetSum(int ind, int sum, vector<int> &arr, vector<int> &ds)
{
    if (ind == arr.size())
    {
        ds.push_back(arr[ind]);
        return;
    }
    else
    {
        subsetSum(ind + 1, sum + arr[ind], arr, ds);
        subsetSum(ind + 1, sum, arr, ds);
    }
}
int main()
{
    vector<int> arr, ds;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    int sum = 0;
    subsetSum(0, sum, arr, ds);
    sort(ds.begin(), ds.end());
    for (auto item : ds)
    {
        cout << item;
    }
    return 0;
}