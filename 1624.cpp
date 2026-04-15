/**
* Author: Hasibul Islam
* Created on: 2026-04-15 20:49
* Short Desc: Backtracking problem
* IDEA: 
*/

#include <bits/stdc++.h>

using namespace std;

bool is_safe_place(vector<string> &board, int n, int row, int col)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }
    for (i = row, j = col; i < n && j < n; i++, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    for (i = row, j = col; i < n && j < n; i++, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    for (i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    for (i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

void n_queens(vector<string> &board, int row, int n, int ans)
{
    if (row == n)
    {
        ans += 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (is_safe_place(board, n, row, i))
            {
                n_queens(board, )
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> board;
    int i, n = 8, j, ans = 0;

    for (i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        cin.ignore();

        board.push_back(str);
    }

    for (auto val: board)
    {
        cout << val << endl;
    }
    
    return 0;
}