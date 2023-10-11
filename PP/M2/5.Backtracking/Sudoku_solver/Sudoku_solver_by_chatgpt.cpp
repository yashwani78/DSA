#include <iostream>
#include <vector>
using namespace std;

int getMatNum(int i, int j) {
    if (i >= 0 && i <= 2) {
        if (j >= 0 && j <= 2)
            return 0;
        else if (j >= 3 && j <= 5)
            return 1;
        else if (j >= 6 && j <= 8)
            return 2;
    }
    if (i >= 3 && i <= 5) {
        if (j >= 0 && j <= 2)
            return 3;
        else if (j >= 3 && j <= 5)
            return 4;
        else if (j >= 6 && j <= 8)
            return 5;
    }
    if (i >= 6 && i <= 8) {
        if (j >= 0 && j <= 2)
            return 6;
        else if (j >= 3 && j <= 5)
            return 7;
        else if (j >= 6 && j <= 8)
            return 8;
    }
    return -1; // Invalid case
}

void ss(vector<vector<int>>& board, int i, int j, bool& ansfound, vector<vector<int>>& rf,
        vector<vector<int>>& cf, vector<vector<int>>& mf, vector<vector<int>>& ans) {
    if (ansfound)
        return;
    if (i == 9) {
        ansfound = true;
        ans = board;
        return;
    }
    if (board[i][j] != 0) {
        if (j < 8)
            ss(board, i, j + 1, ansfound, rf, cf, mf, ans);
        else
            ss(board, i + 1, 0, ansfound, rf, cf, mf, ans);
        return;
    }
    int matnum = getMatNum(i, j);
    for (int val = 1; val <= 9; val++) {
        if (rf[i][val - 1] == 0 && cf[j][val - 1] == 0 && mf[matnum][val - 1] == 0) {
            board[i][j] = val;
            rf[i][val - 1] = 1;
            cf[j][val - 1] = 1;
            mf[matnum][val - 1] = 1;

            if (j < 8)
                ss(board, i, j + 1, ansfound, rf, cf, mf, ans);
            else
                ss(board, i + 1, 0, ansfound, rf, cf, mf, ans);

            board[i][j] = 0;
            rf[i][val - 1] = 0;
            cf[j][val - 1] = 0;
            mf[matnum][val - 1] = 0;
        }
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

    bool ansfound = false;
    vector<vector<int>> rf(9, vector<int>(9, 0));
    vector<vector<int>> cf(9, vector<int>(9, 0));
    vector<vector<int>> mf(9, vector<int>(9, 0));


    // Attention here --> in just 2 nested loops the values are populated in the all three matrices.
    // Optimized and way better than mine.
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != 0) {
                rf[i][board[i][j] - 1]++;
                cf[j][board[i][j] - 1]++;
                int matnum = getMatNum(i, j);
                mf[matnum][board[i][j] - 1]++;
            }
        }
    }

    vector<vector<int>> ans;

    ss(board, 0, 0, ansfound, rf, cf, mf, ans);

    cout << "ans matrix: " << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << "board matrix: " << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
