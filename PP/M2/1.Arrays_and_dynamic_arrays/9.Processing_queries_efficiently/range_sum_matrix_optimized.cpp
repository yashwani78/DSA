#include <iostream>
using namespace std;
// optimized
int main() {
    int n,m;
	cin >> n >> m;
	int mat[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mat[i][j];
		}
	}
    for(int i = 0; i < n; i++){
        for (int j = 1; j < m; j++){
		mat[i][j] = mat[i][j] + mat[i][j-1];
	    }
    }
    for(int i = 1; i < n; i++){
        for (int j = 0; j < m; j++){
		mat[i][j] = mat[i][j] + mat[i-1][j];
	    }
    }
	/* This code below will print the prefix sum matrix formed after above operations.*/
	// cout << "------" << endl;
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < m; j++){
	// 		cout << mat[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
    // cout << endl;
	int q, x1, y1, x2, y2;
	cin >> q;
	for (int i = 0; i < q; i++){
		int sum = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		
		if ((x1-1) >= 0 && (y1 -1) >= 0)
			sum = mat[x2][y2] - mat[x2][y1-1] - mat[x1-1][y2] + mat[x1-1][y1-1];
		else if ((x1-1) >= 0 && (y1 - 1) < 0)
			sum = mat[x2][y2]- mat[x1-1][y2];
		else if ((x1-1) < 0 && (y1 - 1) >= 0)
			sum = mat[x2][y2]- mat[x2][y1-1];
		else
			sum = mat[x2][y2];

		cout << sum << endl;
	}
    return 0;
}