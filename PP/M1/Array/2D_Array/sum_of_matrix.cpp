#include <iostream>
using namespace std;

int main(){
    int m, n, i ,j;
    cin >> m >> n;
    int A[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
        cout << endl;
    int B[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> B[i][j];
        }
    }
        cout << endl;
    int C[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}