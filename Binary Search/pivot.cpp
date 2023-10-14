#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int s = 0, e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (nums[mid] >= nums[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};
int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    Solution s;
    int a = s.pivotIndex(nums);
    cout << a;
    return 0;
}