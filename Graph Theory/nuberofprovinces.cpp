#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adj[], int vis[])
{
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis);
        }
    }
}
int findNumOfProvinces(vector<vector<int>> &roads, int n)
{
    // Write your code here.
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
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    // }
    int vis[n] = {0};
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(!vis[i]){
            cnt++;
            dfs(i, adj, vis);
        }
    }
    return cnt;
}
int main()
{
    int n = 3;
    vector<vector<int>> roads = {{1, 0, 0},
                                 {0, 1, 0},
                                 {0, 0, 1}};
    cout << findNumOfProvinces(roads, n);
    return 0;
}