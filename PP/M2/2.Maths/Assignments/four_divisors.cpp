#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		int cnt = 0, sum = 0, valid_sum = 0;
		
		for(int j = 0; j <= n; j++){
			cnt = 0;

			for(int i = 1; i <= a[j]; i++){
				if(a[j]%i == 0){
					cnt++;
					sum += i;
				}
			}

            // cout << cnt << endl;

			if(cnt != 4){
				sum = 0;
			}

			else{
				valid_sum += sum;
				sum = 0;
			}
		}
		cout << valid_sum << endl;
	}
	return 0;
}
