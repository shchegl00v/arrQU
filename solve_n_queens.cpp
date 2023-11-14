#include "solve_n_queens.h"
#include "is_safe.h"
#include "print_solution.h"
#include "vector"

using namespace std;

bool solve_n_queens(vector<vector<int>>& board, int col, int N) {
    if (col == N) {
        print_solution(board, N);
        return true;
    }

    bool has_solution = false;
    for (int i = 0; i < N; i++) {
        if (is_safe(board, i, col, N)) {
            board[i][col] = 1;
            has_solution = solve_n_queens(board, col + 1, N) || has_solution;
            board[i][col] = 0;
        }
    }

    return has_solution;
}


