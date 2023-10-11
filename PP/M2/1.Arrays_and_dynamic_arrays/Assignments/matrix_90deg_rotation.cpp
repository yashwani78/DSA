#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    int rotated [n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            rotated[j][n-1-i] = mat[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
        cout << endl;
    
    return 0;
}