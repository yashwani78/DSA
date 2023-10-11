#include <iostream>
using namespace std;
//Brute force
int main() {
    int n,m;
	cin >> n >> m;
	int mat[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mat[i][j];
		}
	}
	int q, x1, y1, x2, y2;
	cin >> q;
	for (int i = 0; i < q; i++){
		cin >> x1 >> y1 >> x2 >> y2;
		int sum = 0;
		for(int i = x1; i <= x2; i++){
			for(int j = y1; j <= y2; j++){
				sum += mat[i][j];
			}
		}
		cout << sum << endl;
	}
    return 0;
}