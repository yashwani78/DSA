#include <iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	for( int j = 1; j <= T; j++){
		int n;
		cin >> n;
		int A[n];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		cin >> n;
		int B[n];
		for (int i = 0; i < n; i++){
			cin >> B[i];
		}
		int C[n];
		for (int i = 0; i < n; i++){
			if( A[i] >= B[i]){
				C[i] = A[i]*10 + B[i];
			}
			else if(B[i] > A[i]){
				C[i] = B[i]*10 + A[i];
			}
		}
		for (int i = 0; i < n; i++){
			cout << C[i] << " ";
		}
        cout << endl;
	}
    return 0;
}