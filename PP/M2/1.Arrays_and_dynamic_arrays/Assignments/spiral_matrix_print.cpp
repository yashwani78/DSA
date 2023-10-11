/* Code by chatgpt*/ 
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    int rowstart = 0, rowend = m - 1, colstart = 0, colend = n - 1;
    while (rowstart <= rowend && colstart <= colend) {
        for (int col = colstart; col <= colend; col++) {
            cout << mat[rowstart][col] << " ";
        }
        rowstart++;
        for (int row = rowstart; row <= rowend; row++) {
            cout << mat[row][colend] << " ";
        }
        colend--;
        if (rowstart <= rowend) { // Added boundary check
            for (int col = colend; col >= colstart; col--) {
                cout << mat[rowend][col] << " ";
            }
            rowend--;
        }
        if (colstart <= colend) { // Added boundary check
            for (int row = rowend; row >= rowstart; row--) {
                cout << mat[row][colstart] << " ";
            }
            colstart++;
        }
    }
    cout << endl;
    return 0;
}
