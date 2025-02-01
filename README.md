# sudoku-solver-cpp
A C++ backtracking-based Sudoku solver that finds a valid solution for a given 9x9 Sudoku board. This program efficiently places numbers using recursion and backtracking.

#🚀 Features:

✔️ Solves any valid 9x9 Sudoku puzzle
✔️ Uses backtracking algorithm for efficiency
✔️ Simple and easy-to-understand C++ implementation
✔️ Prints the solved Sudoku board


#📌 How It Works:

Checks if a number (1-9) is safe to place in an empty cell.
Fills empty cells recursively using backtracking.
Backtracks when no valid number is found and tries another possibility.
Prints the completed Sudoku board if a solution exists.


#📷 Example Input & Output:

Input (Unsolved Sudoku Board)
5 3 0 | 0 7 0 | 0 0 0  
6 0 0 | 1 9 5 | 0 0 0  
0 9 8 | 0 0 0 | 0 6 0  
---------------------
8 0 0 | 0 6 0 | 0 0 3  
4 0 0 | 8 0 3 | 0 0 1  
7 0 0 | 0 2 0 | 0 0 6  
---------------------
0 6 0 | 0 0 0 | 2 8 0  
0 0 0 | 4 1 9 | 0 0 5  
0 0 0 | 0 8 0 | 0 7 9  


Output (Solved Sudoku Board)
5 3 4 | 6 7 8 | 9 1 2  
6 7 2 | 1 9 5 | 3 4 8  
1 9 8 | 3 4 2 | 5 6 7  
---------------------
8 5 9 | 7 6 1 | 4 2 3  
4 2 6 | 8 5 3 | 7 9 1  
7 1 3 | 9 2 4 | 8 5 6  
---------------------
9 6 1 | 5 3 7 | 2 8 4  
2 8 7 | 4 1 9 | 6 3 5  
3 4 5 | 2 8 6 | 1 7 9  


#🛠 Algorithm Explanation:

1) Check Validity: Ensure a number can be placed in a cell by checking row, column, and 3×3 subgrid.
2) Recursive Backtracking: Try placing numbers (1-9) in an empty cell, recursively solving the board.
3) Backtrack if Needed: If no valid number is found, backtrack and try another number.
4) Repeat Until Solved: The algorithm continues until the Sudoku is completely filled.


#🤝 Contributing:

Contributions are always welcome! If you have suggestions for improving the algorithm or adding new features, feel free to submit a pull request.

#📩 Contact:

If you encounter any issues or have any questions, feel free to reach out:
📧 Email: surajpratap469@gmail.com
