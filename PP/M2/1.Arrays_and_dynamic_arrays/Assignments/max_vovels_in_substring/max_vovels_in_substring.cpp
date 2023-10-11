#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    string s;
	int t;
    cin >> t;
	while (t--){
        int k, count, max_count = INT_MIN;
		cin >> s;
		cin >> k;
		int len = s.length();
        // cout << "Length : " << len << endl;
		for(int i = 0; i < len-k+1; i++){
			count = 0;
			for (int j = i; j < i+k; j++){
				if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
					count++;
				}
			}
			max_count = max(count, max_count);
		}
		cout << max_count << endl;
	}
    return 0;
}