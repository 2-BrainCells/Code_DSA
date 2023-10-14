#include <bits/stdc++.h>
using namespace std;
class Solution
{
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls)
    {
        vis[node] = 1;
        ls.push_back(node);
        for (auto itr : adj[node])
        {
            if (!vis[itr])
            {
                dfs(itr, adj, vis, ls);
            }
        }
    }

public:
    vector<int> dfsOfGraph(vector<vector<int>> roads, int n)
    {
        // First Node
        int start = 1;
        vector<int> adj[n];
        int vis[n] = {0};
        vector<int> ls;
        for (int i = 0; i < n; i < i++)
        {
            for (int j = 0; j < n; j++)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
        dfs(start, adj, vis, ls);
        return ls;
    }
};
int main()
{
    int n = 4;
    vector<vector<int>> roads = {{1, 1, 1, 0},
                                 {1, 1, 1, 0},
                                 {1, 1, 1, 0},
                                 {0, 0, 0, 1}};
    vector<int> ans;
    Solution s;
    ans = s.dfsOfGraph(roads, n);
    for (auto itr : ans)
    {
        cout << itr << " ";
    }
    return 0;
}