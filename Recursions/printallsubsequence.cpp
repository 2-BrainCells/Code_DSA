#include <bits/stdc++.h>
using namespace std;
void f(int index, vector<int> &ds, int arr[], int n)
{
    if (index >= n)
    {
        for (auto in : ds)
        {
            std::cout << in << " ";
        }
        cout << endl;
        return;
    }
    ds.push_back(arr[index]);
    f(index + 1, ds, arr, n);
    ds.pop_back();
    f(index + 1, ds, arr, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    f(0, ds, arr, n);
    return 0;
}