#include <iostream>
using namespace std;

int main(){
    int n1 , m1;
    cin >> n1 >> m1;
    int A[n1][m1];
    for (int i = 0; i < n1; i++){
        for (int j = 0; j < m1; j++){
            cin >> A[i][j];
        }
    }
    int n2 , m2;
    cin >> n2 >> m2;
    int B[n2][m2];
    for (int i = 0; i < n2; i++){
        for (int j = 0; j < m2; j++){
            cin >> B[i][j];
        }
    }
    if (m1 == n2){
        int C[n1][m2];
        for (int i = 0; i < n1; i++){
            for ( int j = 0; j < m2; j++){
                C[i][j] = 0;
            }
        }
        for (int i = 0; i < n1; i++){
            for ( int j = 0; j < m2; j++){
                for(int k = 0; k < n2; k++){
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        for (int i = 0; i < n1; i++){
            for ( int j = 0; j < m2; j++){
                cout << C[i][j] << " ";
            }
        }
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}