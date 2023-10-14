#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivot(vector<int> &nums)
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
    int findElemes(vector<int> &nums, int target, int s, int e)
    {
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        int pivotFind = pivot(nums);
        cout << pivotFind;
        if (target >= nums[pivotFind] && target <= nums[nums.size() - 1])
            return findElemes(nums, target, pivotFind, nums.size() - 1);
        else
        {
            return findElemes(nums, target, 0, pivotFind - 1);
        }
    }
};
int main()
{
    vector<int> nums = {3, 1};
    int target = 1;

    Solution s;
    cout << s.search(nums, target);
    return 0;
}