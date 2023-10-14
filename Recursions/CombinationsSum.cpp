#include <bits/stdc++.h>
using namespace std;

void findCombinations(int ind, int target, vector<int> arr, vector<vector<int>> ans, vector<int> ds)
{

    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > target)
            break;
        ds.push_back(arr[ind]);
        findCombinations(i + 1, target - arr[ind], arr, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(candidates.begin(), candidates.end());
    findCombinations(0, target, candidates, ans, ds);
    return ans;
}
int main()
{
    vector<int> candidates;
    candidates.push_back(10);
    candidates.push_back(1);
    candidates.push_back(2);
    candidates.push_back(7);
    candidates.push_back(6);
    candidates.push_back(1);
    candidates.push_back(5);
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> result = combinationSum2(candidates, 8);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
            std::cout << result[i][j] << " ";
        std::cout << endl;
    }
    return 0;
}