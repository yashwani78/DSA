#include <iostream>
using namespace std;
int main() {
	int t, n;
	cin >> t;
    // input for testcases
	for (int i = 1; i <= t; i++){
		cin >> n;
        // input for elements
		long long a[n];
		for (int j = 0; j < n; j++){
			cin >> a[j];
		}
        // counting number of digits and calculating their sum
		int sum=0, j;
		for (j = 0; j < n; j++){
            int count=0;
			if(a[j] == 0){
				count++;
			}
			else{
				while (a[j] != 0){
					a[j] /= 10;
					count++;
				}
			}
			sum += count;
		}
		if(sum == 1){
			cout<<"Yes"<<endl;
		}
		else{
			for (j = 2; j < sum; j++){
				if (sum % j == 0){
					cout << "No" << endl;
					break;
				}
			}
			if (j == sum){
				cout << "Yes" << endl;
			}
		}
    }
    return 0;
}
