#include <bits/stdc++.h>
using namespace std;
// void nextPermutation(vector<int> &nums)
// {
//     next_permutation(nums.begin(), nums.end());
//     for (auto item : nums)
//     {
//         cout << item;
//     }
// }
void nextPermutation(vector<int> &nums)
{
    // next_permutation(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        swap(nums[i + 1], nums[nums.size() - 1]);
    }
    for (auto item : nums)
    {
        cout << item;
    }
}
int main()
{
    vector<int> nums = {2, 3, 1};
    nextPermutation(nums);
    return 0;
}