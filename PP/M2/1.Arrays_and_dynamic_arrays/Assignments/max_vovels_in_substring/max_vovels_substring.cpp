#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int t, k;
    cin >> t;
    while (t--) {
        cin >> s >> k;
        int len = s.length();
        int cnt = 0, max_cnt = 0;
        for (int i = 0; i < len; i++) {
            if (i >= k && (s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u')) {
                cnt--;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                cnt++;
            }
            if (i >= k-1) {
                max_cnt = max(max_cnt, cnt);
            }
        }
        cout << max_cnt << endl;
    }
    return 0;
}
