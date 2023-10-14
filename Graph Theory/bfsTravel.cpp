#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    vector<int> bfsTraversal(int n, vector<vector<int>> &roads)
    {
        vector<int> bfs;
        vector<int> adj[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (roads[i][j] == 1 && i != j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int vis[n] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for (auto itr : adj[node])
            {
                if (!vis[itr])
                {
                    vis[itr] = 1;
                    q.push(itr);
                }
            }
        }
        return bfs;
    }
};
int main()
{
    graph g1;
    int n = 3;
    vector<vector<int>> roads = {{1, 1, 0},
                                 {1, 1, 0},
                                 {0, 0, 1}};
    vector<int> ans;
    ans = g1.bfsTraversal(n, roads);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}