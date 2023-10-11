#include <iostream>
#include <climits>
using namespace std;
/*Problem : Given : int arr[n], int p, q, r.
            find : maximum value of (p*arr[i] + q*arr[j] + r*arr[k]) where i,j,k are the indices 
            of the input array.
            constraints : i < j < k.*/
// Bruteforce approach for the Maximized expression problem is given below.
// Time limit exeeded on codeforces.
int main(){
    int n;
    long p,q,r;
    cin >> n >> p >> q >> r;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long ans = LLONG_MIN;
    for (int i = 0; i < n; i++){
        for (int j = i; j <= n-1; j++){
            for (int k = j; k <= n-1; k++){
                long long exp = p*arr[i] + q*arr[j] + r*arr[k];
                if (ans < exp){
                    ans = exp;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
