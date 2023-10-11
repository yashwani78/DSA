// Lower and upper triangular parts of a matrix

#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    int a[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << "Lower triangular matrix : " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
    cout << "Upper triangular matrix : " << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            cout << "  ";
        }
        for(j = i; j < n; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}