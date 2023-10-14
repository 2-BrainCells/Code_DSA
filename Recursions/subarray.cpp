#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
    {
        if (nums.size() <= index)
        {
            ans.push_back(output);
            return;
        }
        solve(nums, output, index + 1, ans);

        int element = output[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
    }

public:
    vector<vector<int>> subset(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, output, 0, ans);
        cout << ans.size();
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    ans = s.subset(nums);
    cout << ans.size();
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
    }
    return 0;
}