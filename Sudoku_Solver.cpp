#include <iostream>
#include <vector>
using namespace std;

#define N 9

bool isSafe(vector<vector<int>> &board, int row, int col, int num) {
    for (int i = 0; i < N; i++) {
        if (board[row][i] == num || board[i][col] == num || 
            board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num)
            return false;
    }
    return true;
}

bool solveSudoku(vector<vector<int>> &board) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (isSafe(board, row, col, num)) {
                        board[row][col] = num;
                        if (solveSudoku(board)) return true;
                        board[row][col] = 0;  // Backtrack
                    }
                }
                return false;  // No valid number found
            }
        }
    }
    return true;  // Solution found
}

void printBoard(vector<vector<int>> &board) {
    for (const auto &row : board) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board)) {
        cout << "Solved Sudoku:\n";
        printBoard(board);
    } else {
        cout << "No solution exists.\n";
    }
    
    return 0;
}
