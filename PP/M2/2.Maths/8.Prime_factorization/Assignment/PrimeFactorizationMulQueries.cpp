#include <iostream>
// #include <unordered_map>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        // unordered_map<int,int> m;
        int n;
        cin >> n;
        for(int i = 2; i*i <= n; i++) {
            if(n%i == 0) cout << i << " ";
            int cnt = 0;
            while(n%i == 0) {
                cnt++;
                n/=i;
            }
            cout << cnt << endl;
        }
        if(n != 1) cout << n << " " << 1 << endl;
    }
    return 0;
}