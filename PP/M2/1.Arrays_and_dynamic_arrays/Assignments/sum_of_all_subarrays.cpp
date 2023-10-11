#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	long long ans;
    long long sum = 0;
	long long m = 1000000007;
	for (int i = 0; i < n; i++){
		ans = ((arr[i]%m) * ((i+1)%m) * ((n-i)%m)) % m;
        sum = (sum % m + ans % m) % m;
	}
	cout << sum << endl;
    int l = sizeof(arr);
    cout << l << endl;
	return 0;
}