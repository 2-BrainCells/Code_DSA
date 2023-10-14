#include <bits/stdc++.h>
using namespace std;
vector<int> selection(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {4, 2, 6, 8, 7, 1}, ans;
    ans = selection(arr);
    for (auto item : ans)
    {
        cout << item << " ";
    }
    return 0;
}