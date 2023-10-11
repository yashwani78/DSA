#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	long mat1[n][m];
	for (int i = 0; i < n; i++ ){
		for (int j = 0; j < m; j++){
			cin >> mat1[i][j];
		}
	}
    long mat2[m][n];
	for (int i = 0; i < n; i++ ){
		for (int j = 0; j < m; j++){
			mat2[j][i] = mat1[i][j];
		}
	}
	for (int i = 0; i < m; i++ ){
		for (int j = 0; j < n; j++){
			cout << mat2[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}