#include <iostream>
int countDistinctWays(int nStairs)
{
    //  Write your code here.
    if (nStairs < 0)
    {
        // ans = 1;
        return 0;
    }
    else if(nStairs == 0)
    {
        return 1;
    }
    int ans =  countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
    return ans;
}
using namespace std;
int main()
{
    cout << countDistinctWays(3);
    return 0;
}