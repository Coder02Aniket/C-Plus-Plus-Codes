#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void recursiveNQueens(int col, int n, vector<string> &board, vector<vector<string>> &ans, vector<int> &left_row, vector<int> &lower_diagonal, vector<int> &upper_diagonal)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (left_row[row] == 0 && lower_diagonal[row + col] == 0 && upper_diagonal[n - 1 + col - row] == 0)
            {
                board[row][col] = 'Q';
                left_row[row] = 1;
                lower_diagonal[row + col] = 1;
                upper_diagonal[n - 1 + col - row] = 1;

                recursiveNQueens(col + 1, n, board, ans, left_row, lower_diagonal, upper_diagonal);

                // BackTracking
                board[row][col] = '.';
                left_row[row] = 0;
                lower_diagonal[row + col] = 0;
                upper_diagonal[n - 1 + col - row] = 0;
            }
        }


    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        vector<int> left_row(n, 0), upper_diagonal(2 * n - 1, 0), lower_diagonal(2 * n - 1, 0);

        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        recursiveNQueens(0, n, board, ans, left_row, lower_diagonal, upper_diagonal);

        for (vector<string> i : ans)
        {
            for (string j : i)
            {
                cout << j << endl;
            }
            cout << endl;
        }
        return ans;
    }
};

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    Solution *ob;
    ob->solveNQueens(8);

    return 0;
}