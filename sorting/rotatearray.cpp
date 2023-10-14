#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        while (k > 0)
        {
            int i = nums.size() - 1;
            int temp = nums[i];
            while (i >= 1)
            {
                nums[i] = nums[--i];
            }
            nums[i] = temp;
            k--;
        }
        for (auto item : nums)
        {
            cout << item << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Solution s;
    s.rotate(nums, k);
    return 0;
}