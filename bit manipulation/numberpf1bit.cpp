
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            if(n & 1){
                count++;
            }
            cout << n << " ";
            n = n >> 1;
            cout << n << endl;
        }
        return count;
    }
};
int main()
{
    Solution s;
    uint32_t n = 00000000000000000000000000001011 ;
    cout << s.hammingWeight(n);
    return 0;
}