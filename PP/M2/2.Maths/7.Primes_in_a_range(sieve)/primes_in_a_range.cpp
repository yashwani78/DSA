#include <iostream>
using namespace std;
int main() {
		int n, cnt, prime = 0;
		cin >> n;
		for (int i = 2; i <= n; i++){
			cnt = 0;
			for (int j = 2; j*j <= i; j++){
				if(i%j == 0){
					cnt++;
					break;
				}
			}
			if (cnt == 0){
				cout << i << " ";
				prime++;
			}
		}
		cout << endl << prime << endl;
		/*	This program has time complexity of o(n*sqrt(n)). To reduce it, we use
			'Sieve of Eratosthenes' approach.*/
	return 0;
}