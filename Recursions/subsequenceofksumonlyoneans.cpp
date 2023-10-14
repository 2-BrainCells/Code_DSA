#include <bits/stdc++.h>
using namespace std;
bool f(int i, vector<int> ds, int arr[], int s, int sum, int n)
{
    if (i == n)
    {
        // satisfied
        if (s == sum)
        {
            for (auto item : ds)
            {
                std::cout << item << " ";
            }
            std::cout << endl;
            return true;
        }
        // not satisfied
        return false;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    if (f(i + 1, ds, arr, s, sum, n) == true)
    {
        return true;
    }
    s -= arr[i];
    ds.pop_back();
    if (f(i + 1, ds, arr, s, sum, n) == true)
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3, sum = 2;
    vector<int> ds;
    f(0, ds, arr, 0, sum, n);
    return 0;
}