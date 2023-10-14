#include <bits/stdc++.h>
using namespace std;
vector<int> smallest(vector<int> nums)
{
    vector<int> G(nums.size(), -1);
    int i = 0;
    int j = i + 1;
    while (i < nums.size())
    {
        if (nums[i] < nums[j])
        {
            G[j] = nums[i];
        }
        else
        {
            j++;
        }
        i++;
        j++;
    }
    for (auto item : G)
    {
        cout << item <<  " ";
    }
}
int main()
{
    vector<int> nums = {4, 5, 2, 10, 8};
    smallest(nums);
    return 0;
}