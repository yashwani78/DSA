#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    long long n,p,q,r;
    cin >> n >> p >> q >> r;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long pmax[n], smax[n];
    
    pmax[0] = p*arr[0];
    for (int i = 1; i < n; i++){
        pmax[i] = max(pmax[i-1], p*arr[i]);
    }
    smax[n-1] = r*arr[n-1];
    for (int i = n-2; i >= 0; i--){
        smax[i] = max(smax[i+1], r*arr[i]);
    }
    long long ans = LLONG_MIN;
    for (int i = 0; i < n; i++){ 
        ans = max(ans, pmax[i]+q*arr[i]+smax[i]);
    }
    cout << ans << endl;

    return 0;
}
