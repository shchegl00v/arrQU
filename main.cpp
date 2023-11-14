#include <iostream>
#include <vector>
#include "solve_n_queens.h"

using namespace std;

int main() {
    int N;
    cout << "Введите размер доски: ";
    cin >> N;

    vector<vector<int>> board(N, vector<int>(N, 0));

    if (!solve_n_queens(board, 0, N)) {
        cout << "Решений не найдено" << endl;
    }

    return 0;
}
