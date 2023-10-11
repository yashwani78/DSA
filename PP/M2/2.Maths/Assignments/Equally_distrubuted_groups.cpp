#include <iostream>
using namespace std;
int main() {
    int t;
	cin >> t;
	while (t--){
		int n; 
		cin >> n;
		int a[n];
		int freq[n];
		int frequency = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 0; i < n; i++){
			frequency = 0;
			for (int j = 0; j < n; j++){
				if ( a[i] == a[j]){
					frequency++;
				}
			}
			freq[i] = frequency;
		}
		int check = 0;
		for (int i = 0; i < n; i++){
			if(freq[0] != freq[i])
				check++;
		}
		if ( check == 0){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}
    return 0;
}