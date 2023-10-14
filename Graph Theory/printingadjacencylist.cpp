// steps to make a graph
// define the type of the graph to be made
// here we have taken undirected graph
// 1. define nodes
// 2. form a graph
// 3. store it inside a container unordered map
// 4. print the map

#include <bits/stdc++.h>
using namespace std;
class graph
{
    unordered_map<int, list<int>> g1;

public:
    void insert(int u, int v, int directed)
    {
        g1[u].push_back(v);
        if (directed == 0)
        {
            g1[v].push_back(u);
        }
    }
    void printing()
    {
        for (auto i : g1)
        {
            cout << i.first << " ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g1;
    int u, v;
    for (int i = 0; i < 5; i++)
    {
        cin >> u >> v;
        g1.insert(u, v, 0);
    }
    g1.printing();
    return 0;
}