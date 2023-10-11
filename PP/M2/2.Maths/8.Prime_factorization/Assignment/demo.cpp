#include <iostream>
#include <vector>
using namespace std;
/**
 * A number is HappyPrime if there are exactly two distinct prime divisors of it.
 * Find the number of HappyPrime numbers in between 1 and N, both inclusive.
*/

int main() {
    // Implementing sieve algorithm.
    int m = 10001;
    vector<int> primes(m, 1);
    primes[1] = 0;
    for(int i = 2; i < m; i++) {
        if(primes[i] == 1) {
            for(int j = i; j*i <= m; j++) {
                primes[i*j] = 0;
            }
        }
    }

    int t;
    cin >> t;
    while(t--) { // Test cases.
        int n;
        cin >> n;
        int cnt = 0;
        int happyPrimeCnt = 0;
        for(int j = 2; j <= n; j++ ){ 
            cnt = 0;
            for(int i = 2; i*i <= j; i++) {
                if(n%i == 0) {
                    if(primes[i] == 1) cnt++;
                }
                while(n%j == 0) {
                    n /= i;
                }
                if(cnt > 2) break;
            }
            if(j!=1) cnt++;
            if(cnt == 2) 
                happyPrimeCnt++;
        }
        cout << happyPrimeCnt << endl;
    }
    return 0;
}