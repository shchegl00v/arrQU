#include "print_solution.h"
#include <iostream>

using namespace std;

void print_solution(const std::vector<std::vector<int>>& board, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j]) {
                cout << "Q ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
