#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> ans;

    void solve(int row, int n, vector<string> &board,
               vector<int> &leftRow,
               vector<int> &lowerDiagonal,
               vector<int> &upperDiagonal) {

        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (leftRow[col] == 0 &&
                lowerDiagonal[row + col] == 0 &&
                upperDiagonal[n - 1 + col - row] == 0) {

                board[row][col] = 'Q';
                leftRow[col] = 1;
                lowerDiagonal[row + col] = 1;
                upperDiagonal[n - 1 + col - row] = 1;

                solve(row + 1, n, board, leftRow, lowerDiagonal, upperDiagonal);

                board[row][col] = '.';
                leftRow[col] = 0;
                lowerDiagonal[row + col] = 0;
                upperDiagonal[n - 1 + col - row] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n);
        string s(n, '.');

        for (int i = 0; i < n; i++)
            board[i] = s;

        vector<int> leftRow(n, 0);
        vector<int> lowerDiagonal(2 * n - 1, 0);
        vector<int> upperDiagonal(2 * n - 1, 0);

        solve(0, n, board, leftRow, lowerDiagonal, upperDiagonal);

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<vector<string>> result = obj.solveNQueens(n);

    for (auto &board : result) {
        for (auto &row : board)
            cout << row << endl;
        cout << endl;
    }

    return 0;
}