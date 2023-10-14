#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countBits(int n)
    {
        vector<int> nums;
        if (n % 2 == 0)
        {
            n = !n ^ 0;
        }else{
            n = n ^ 0;
        }
        return n;
    }
};
int main()
{
    Solution s;
    cout << s.countBits(6);
    return 0;
}