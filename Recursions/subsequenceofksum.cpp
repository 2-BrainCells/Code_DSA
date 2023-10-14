#include <bits/stdc++.h>
using namespace std;
void f(int i, vector<int> ds, int arr[], int s, int sum, int n)
{
    if (i == n)
    {
        if (s == sum)
        {
            for (auto item : ds)
            {
                std::cout << item << " ";
            }
            std::cout << endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    f(i + 1, ds, arr, s, sum, n);
    s -= arr[i];
    ds.pop_back();
    f(i + 1, ds, arr, s, sum, n);
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3, sum = 2;
    vector<int> ds;
    f(0, ds, arr, 0, sum, n);
    return 0;
}