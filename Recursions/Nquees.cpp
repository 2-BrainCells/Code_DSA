#include <bits/stdc++.h>
using namespace std;
void solve(int col, vector<vector<string>> &ans, vector<string> &board, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (leftRow[row] == 0 && upperDiagonal[row + col] == 0 && lowerDiagonal[(n - 1) + (col - row)] == 0)
        {
            board[row][col] = 'Q';
            leftRow[row] = 1;
            upperDiagonal[row + col] = 1;
            lowerDiagonal[(n - 1) + (col - row)] = 1;
            solve(col + 1, ans, board, leftRow, upperDiagonal, lowerDiagonal, n);
            board[row][col] = '.';
            leftRow[row] = 0;
            upperDiagonal[row + col] = 0;
            lowerDiagonal[(n - 1) + (col - row)] = 0;
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    // cout << s; cout << endl;
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
    solve(0, ans, board, leftRow, upperDiagonal, lowerDiagonal, n);
    return ans;
}
int main()
{
    vector<vector<string>> ans;
    ans = solveNQueens(4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << ans[i][j] << " ";
        }
        std::cout << endl;
    }
    return 0;
}