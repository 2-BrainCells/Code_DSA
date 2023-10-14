#include <bits/stdc++.h>
using namespace std;
void find(int ind, vector<vector<int>> &ans, vector<int> &ds, vector<int> &arr, int target)
{
    if (ind == ans.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if (arr[ind] <= target)
    {
        ds.push_back(arr[ind]);
        find(ind, ans, ds, arr, target - arr[ind]);
        ds.pop_back();
    }
    find(ind + 1, ans, ds, arr, target);
}
vector<vector<int>> findComb(vector<int> &arr, int taget)
{
    vector<vector<int>> ans;
    vector<int> ds;
    find(0, ans, ds, arr, taget);
    return ans;
}
int main()
{
    vector<vector<int>> ans;
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    ans = findComb(arr, target);
    for(auto item : ans){
        cout << ans;
    }
    
    return 0;
}