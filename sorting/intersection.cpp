#include <bits/stdc++.h>
using namespace std;
vector<int> intersect(const vector<int> &A, const vector<int> &B)
{
    vector<int> ans;
    int n = max(A.size(), B.size());
    int j = 0;
    int i = 0;
    while (i < n)
    {
        if (A[i] == B[j])
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
        if (A[i] > B[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}
int main()
{
    vector<int> A = {1, 5, 7, 8, 9, 10, 10, 14, 16, 16, 17, 19, 20, 20, 20, 20, 21, 23, 26, 27, 29, 30, 30, 30, 31, 32, 33, 33, 34, 35, 35, 36, 37, 39, 39, 41, 42, 43, 43, 44, 44, 45, 46, 46, 47, 49, 51, 52, 53, 55, 55, 56, 57, 58, 59, 60, 65, 66, 66, 68, 68, 69, 69, 70, 70, 70, 71, 73, 75, 75, 75, 79, 80, 80, 81, 82, 85, 87, 91, 92, 98, 98, 98, 99, 100, 101}, B = {4, 7, 10, 10, 15, 17, 19, 20, 24, 27, 27, 30, 31, 35, 40, 41, 42, 46, 48, 49, 50, 51, 54, 57, 62, 62, 63, 66, 67, 68, 69, 70, 71, 73, 74, 78, 80, 81, 92, 94, 99, 101}, ans;
    ans = intersect(A, B);
    for (auto item : ans)
    {
        cout << item << " ";
    }
    return 0;
}