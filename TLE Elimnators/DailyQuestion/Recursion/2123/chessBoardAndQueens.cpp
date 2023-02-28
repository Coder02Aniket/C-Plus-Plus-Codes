#include <bits/stdc++.h>

using namespace std;

void RecursiveNQueen(int col, vector<string> &board, vector<int> &ans, vector<int> &left_row, vector<int> &lower_diagonal, vector<int> &upper_diagonal)
{
    if (col == 8)
    {
        // adds number for every ways possible
        ans.push_back(1);
        return;
    }
    for (int row = 0; row < 8; row++)
    {
        // check if [row][col] combination contains a * which is restricted position and also checks for left side of row and lower and upper diagonal
        // lowerdiagonal[row+col]
        // upperdiagonal[n-1+col-row]
        if (board[row][col] != '*' && left_row[row] == 0 && lower_diagonal[row + col] == 0 && upper_diagonal[8 - 1 + col - row] == 0)
        {

            board[row][col] = 'Q';
            left_row[row] = 1;
            lower_diagonal[row + col] = 1;
            upper_diagonal[7 + col - row] = 1;
            RecursiveNQueen(col + 1, board, ans, left_row, lower_diagonal, upper_diagonal);

            // backtracking 
            board[row][col] = '.';
            left_row[row] = 0;
            lower_diagonal[row + col] = 0;
            upper_diagonal[7 + col - row] = 0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //#ifndef ONLINE_JUDGE

        freopen("input.txt","r", stdin);

        freopen("output.txt","w", stdout);

        freopen("errors.txt","w",stderr);

    //#endif

    vector<int> ans;
    vector<string> board(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> board[i];
    }
    // size of lower and upper diagonal will always be 2n-1 
    vector<int> left_row(8, 0), lower_diagonal(15, 0), upper_diagonal(15, 0);

    RecursiveNQueen(0, board, ans, left_row, lower_diagonal, upper_diagonal);

    // printing number of solutions
    cout << ans.size() << endl ;

    return 0;
}

    