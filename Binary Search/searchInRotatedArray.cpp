#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int pivotIndex(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;
        while (s < e)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                break;
            }
            else if ((nums[mid] <= nums[0]))
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};
int main()
{
    vector<int> nums = {7, 9, 16, 2, 5};
    Solution s;
    int a = s.pivotIndex(nums, 5);
    cout << a;
    return 0;
}