// Transpose of a SQUARE(n * n) matrix

#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int a[n][n];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++){
        for (j = i; j < n; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout << "********\n" <<endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}