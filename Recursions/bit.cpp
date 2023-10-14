#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    // Write your code here.
    vector<vector<int>> ans;
    set<vector<int>> sol;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    vector<int> ds = {arr[i], arr[j], arr[k]};
                    sol.insert(ds);
                }
            }
        }
    }
    for (auto itr = sol.begin(); itr != sol.end(); itr++)
    {
        cout << *itr;
        ans.push_back(*itr);
    }
    return ans;
}
int main()
{
    vector<int> n1 = {10, 5, 5, 5, 2};
    vector<vector<int>> ans = findTriplets(n1, 5, 12);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
