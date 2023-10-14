#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] == 0)
            {
                int j = i;
                int temp = nums[i];
                while (j < nums.size() - 1)
                {
                    nums[j] = nums[j++];
                }
                cout << endl;
                nums[nums.size() - 1] = temp;
                cout << endl;
            }
            i++;
        }
        for (auto item : nums)
        {
            cout << item << " ";
        }
    }
};
int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution s;
    s.moveZeroes(nums);
    return 0;
}