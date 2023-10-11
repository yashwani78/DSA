#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> primes(n+1, 1);
    
    primes[1] = 0;

    for(int i = 2; i*i <= n; i++) {
        if(primes[i] == 1) {
            for(int j = i; j*i <= n; j++) {
                primes[j*i] = 0;
            }
        }
    }

    // This prefixSumPrimes array will help to find the number of primes in a given range.
    vector<int> prefixSumPrimes(n+1, 0);
    prefixSumPrimes[0] = 0;
    for(int i = 1; i <= n; i++) {
        prefixSumPrimes[i] = prefixSumPrimes[i-1] + primes[i];
    }

    cout << "Primes upto 'n':" << endl;
    for(int i = 1; i <= n; i++) {
        if(primes[i] == 1) cout << i << " ";
    }
    cout << endl;

    // To find number of primes upto n:
    cout << "No. of primes : " << prefixSumPrimes[n] << endl;

    return 0;
}